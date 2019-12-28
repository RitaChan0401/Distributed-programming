#include <stdlib.h> /* atoi = 整数値の文字列型データをint型に変換する関数 */
#include <stdio.h>  /* printf */

int main (int argc, char *argv [])
{
    int i, sum = 0;
    for (i = 1; i < argc; i++) {
        sum += atoi (argv[i]);
    }
    printf ("%d\n", sum);
}
