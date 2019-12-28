#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){
    int n, fd[2];
    char buf[1024];
    pid_t pid;

    pipe(fd);
    if((pid = fork()) == 0){
        close(fd[0]);
        n = write(fd[1], "Hello\n", 6);
        n = write(fd[1], "Sorry\n", 6);
        n = write(fd[1], "Thanks\n", 7);
        close(fd[1]);
    }else{
        close(fd[1]);
        while(1){
            n = read(fd[0], buf, sizeof(buf));
            if(n <= 0) break;
            write(STDOUT_FILENO,buf,n);
        }
        close(fd[0]);
        wait(NULL);
    }
}