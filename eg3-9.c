#include<stdio.h>
int main()
{
    char a,b,c;
    a=getchar();
    b=getchar();
    c=getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar(getchar());
    printf("%c",getchar());
    putchar('\n');
    return 0;
}
