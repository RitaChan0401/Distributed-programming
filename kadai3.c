#include <errno.h>      /* errno */
#include <sys/types.h>  /* closedir, opendir, readdir */
#include <stdio.h>      /* perror, printf */
#include <stdlib.h>     /* exit */
#include <dirent.h>     /* closedir, opendir, readdir */
#include <zconf.h>

int main(void) {
    int c;
    pid_t cpid;

    if((cpid = fork()) == -1) {
        perror("fork");
        exit(1);
    } else if(cpid == 0) {
        /* 子プロセス */
        for(c = '0'; c <= '9'; c++) {
            putchar(c);
            fflush(stdout);  /* バッファの内容を吐き出す */
            sleep(2); /* 2秒ごと */
        }
        exit(0); /* 子プロセスのexit */
    }
    /* 親プロセス */
    for(c = 'A' ; c <= 'Z' ; c++) {
        putchar(c);
        fflush(stdout);
        sleep(1);
    }
    // 可能であればwait()も入れてみる．
    putchar('\n');
    exit(0); /* 親プロセス*/
}

