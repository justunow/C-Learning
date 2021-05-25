#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x>0)
        printf("y=1\n");
    else
    {
        if(x==0)
            printf("y=0\n");
        else
            printf("y=-1\n");
    }
    return 0;
}
