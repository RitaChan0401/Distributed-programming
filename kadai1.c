#include <stdlib.h>
#include <stdio.h>

struct vecter{
    int x;
    int y;
}a,b;

int main(int argc , char *argv[]){
    a.x = atoi(argv[1]);
    a.y = atoi(argv[2]);
    b.x = atoi(argv[3]);
    b.y = atoi(argv[4]);

    printf("%d %d\n", a.x + b.x, a.y + b.y);
}

