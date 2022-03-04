#include <stdio.h>
int main()
{
    int a[100],n,i,t,z;
    printf("\nEnter the length of array = ");
    scanf("%d",&n);
    printf("\nEnter %d values for the array - \n",n);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    
	int *p,*q;
    p=&a[0];
    q=&t;
    for(i = 0;i < n; p++,i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(*p>*(p+1))
            {
                *q=*p;
                *p=*(p+1);
                *(p+1)=*q;
            }
        }
    }

    printf("\nThe sorted array is - \n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
	printf("\n\n");
    return(0);
}
