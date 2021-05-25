#include<stdio.h>
int main()
{
    int m,n;
    for(n=1;n<=4;n++)
    {
        for(m=1;m<=5;m++)
        {
            printf("%d\t",n*m);
            if(m%5==0)
                printf("\n");
        }
    }
    return 0;
}
