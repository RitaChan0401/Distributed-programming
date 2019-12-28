#include <stdio.h>
#include <stdlib.h>

int main(){
    char i[] = "1234567890";

    int num = 0;
    num = atoi(i); //ここで文字列からint型に変換される。
    printf("%d\n" , num);

    return 0;

}

