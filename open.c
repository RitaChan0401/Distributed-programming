#include <sys/types.h> /* open, read */
#include <stdio.h>     /* perror, printf */
#include <stdlib.h>    /* exit */
#include <sys/stat.h>  /* open */
#include <fcntl.h>     /* open */
#include <sys/uio.h>   /* read */
#include <unistd.h>    /* close, read */


int main(int argc, char *argv[]) {
    int fd;
    ssize_t cc;
    char buf[10];
     perror(argv[0]);
     int a = 0;

    if ((fd = open( argv[1], O_RDONLY)) == -1) {
        perror("open");
        exit(1);
    }
    while ((cc = read(fd, buf, sizeof(buf))) > 0) {
        int a = (int)cc;
    }

    printf("%d bytes read\n", a);

}
