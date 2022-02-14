#include<stdio.h>

long double power(int,int);
int main()
{
        int n,p;
        printf("\nEnter a number = ");
        scanf("%d",&n);
        printf("\nEnter the power to which it is to be raised = ");
        scanf("%d",&p);
        if(n==0 && p==0)
        	printf("\nResult of 0 to the power 0 is undefined !!");
        else
        	printf("\nValue of %d to the power %d is %.2Lf\n\n",n,p,(long double)power(n,p));
        return 0;
}
long double power(int a,int b)
{
    if(b==0)
    return 1;
    else if(b>0)
    return (a*power(a,--b));
    else
    return 1.0/(a*power(a,++b));
}
