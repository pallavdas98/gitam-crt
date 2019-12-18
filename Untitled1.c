#include<stdio.h>
#define func main
int func()
{
	int n1,n2,b;
	printf("Enter 2 numbers: \n");
	scanf("%d %d",&n1,&n2);
	while(n2!=0)
	{
		b=(~n1)&n2;
		n1=n1^n2;
		n2=b << 1;
	}
	printf("DIFFERENCE IS %d",n1);
}
