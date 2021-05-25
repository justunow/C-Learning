#include<stdio.h>
int main()
{
    float a;
    a=10000/3.0;
    printf("%f\n",a);
    printf("%-25.15f,%25.15f\n",a,a);
    printf("%e\n",123.456);
    printf("%13.2e\n",123.456);
    return 0;
}
