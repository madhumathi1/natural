#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum=%d",sum);
	return 0;
}
