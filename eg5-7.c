#include<stdio.h>
int main()
{
    double i,f=1,sum=0;
    for(i=1;1/i>=1e-8;i+=2)
    {
        sum=sum+f/i;
        f=-f;
    }
    printf("pi=%10.8f\t %f",4*sum,i);
    return 0;
}
