#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("nhap n: ");scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	  sum+=i;
	}
	printf("Tong = %d",sum);
}
