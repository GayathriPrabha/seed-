#include <stdio.h>
int main()
{
	int n;
	int i, temp;
	int digit,product;
	scanf("%d",&n);
	for(i=0;i<1000;i++)
	{
	    temp=i;
	    product=i;
	    while(temp!=0)
	    {
	        digit=temp%10;
	        product=product*digit;
	        temp=temp/10;
	    }
	    if(product==n)
	    {
	        printf("\n%d",i);
	    }
	}
	return 0;
}

