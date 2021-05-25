#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    if(a>b)
        printf("%5.2f,%5.2f\n",b,a);
    else
        printf("%5.2f,%5.2f\n",a,b);
    return 0;
}
