//2. C program to read an array of 8 integer and find sum of all even and odd numbers.
#include<stdio.h>
int main()
{
	int n[8],i,sum=0,odd=0;
	printf("Enter 8 integer number=");
	for(i=0; i<8; i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0; i<8; i++)
	{
		if(n[i]%2==0)
		{
			sum=sum+n[i];
		}
		if (n[i]%2==!0)
		{  
			odd=odd+n[i];
		}
	}
		printf("sum even number=%d\n",sum);
		printf("sum odd number=%d\n",odd);
	return(0);
} 
