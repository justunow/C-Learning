#include<stdio.h>
int main()
{
    char gd;
    gd=getchar();
    printf("Your score:\n");
    switch(gd)
    {
        case'A':printf("85~100\n");break;
        case'B':printf("70~84\n");break;
        case'C':printf("60~69\n");break;
        case'D':printf("<60\n");break;
        default:printf("Enter data error!\n");
    }
    return 0;
}
