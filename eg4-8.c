#include<stdio.h>
int main()
{
    int year;
    printf("enter year: \n");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0))
        printf("%d is ",year);
    else
        printf("%d is not ",year);
    printf("a leap year.\n");
    return 0;
}
