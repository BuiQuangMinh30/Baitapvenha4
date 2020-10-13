#include<stdio.h>
int main()
{
	int n,i;
	printf("Nhap n: ");scanf("%d",&n);
	if(n<2)
	{
		printf("%d khong la so nguyen to.");
		return 0;
	}
	int c=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n % i== 0)
		{
			c++;
		}
	}
	if(c==0){
		printf("%d la so nguyen to!");
	}else{
		printf("%d khong la so nguyen to");
	return 0;
	}
}
