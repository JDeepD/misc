#include <stdio.h>

int main()
{  float i,j,k,sum;
    int p; 
    for(i=1;i<=7;i++)
    {  p = 1;
       for(j = i; j >= 1;--j){ 
		   p = p*j;
       }
       k=i/p;
       sum=sum+k;
    }
    printf("the sum of seven terms is %f",sum);

    return 0;
}
