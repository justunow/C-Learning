#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
                printf("%5.2f,%5.2f,%5.2f\n",c,b,a);
            else
                printf("%5.2f,%5.2f,%5.2f\n",b,c,a);
        }
        else
            printf("%5.2f,%5.2f,%5.2f\n",b,a,c);
    }
    else
    {
        if(a>c)
            printf("%5.2f,%5.2f,%5.2f\n",c,a,b);
        else
        {
            if(b<c)
                printf("%5.2f,%5.2f,%5.2f\n",a,b,c);
            else
                printf("%5.2f,%5.2f,%5.2f\n",a,c,b);
        }
    }
    return 0;
}


