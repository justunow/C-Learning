#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            break;
    if(i<=sqrt(n))
        printf("%d is not a prime number.\n",n);
    else
        printf("%d is a prime number.\n",n);
    return 0;
}
