#include<stdio.h>
int main()
{
	int a,b,c,p,s,p1;
	printf("Nhap a: \n");scanf("%d",&a);
	printf("Nhap b: \n");scanf("%d",&b);
	printf("Nhap c: \n");scanf("%d",&c);
	if(a+b>c&&b+c>a&&c+a>b)
	{
		p=a+b+c;
		p1=p/2;
		s=sqrt((p1*(p1-a)*(p1-c)*(p1-b)));
	}
	printf("Chu vi la: %d\n",p);
	printf("Dien tich la: %d",s);
	
}
