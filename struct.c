#include <stdio.h>

struct student {

    //構造体は異なる型まとめて扱いたい場合に使用
    int number; /* 学籍番号 */
    char *name; /* 名前 */
};

int main()
{
    struct student x, *p = &x; //ポインタ使わないときは、struct student x;
    x.number = 1234; // ポインタを使うときは、p->number = 1234;
    printf ("%d\n", (*p).number); //(*p).number or *p->number or x.number
}