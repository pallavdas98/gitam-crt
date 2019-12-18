#include<stdio.h>
int main()
{
	char n[20];
	char sn[20];
	printf("Enter yoour name \n");
	printf("Enter your surname \n");
	scanf("%s %s", &n,&sn);
	printf("Your name is %s \n",n);
	printf("Your Surname is %s \n",sn);
	printf("Your name is %s \t",n);
	printf("Your surname is %s \t",sn);
	printf("Your name is %s \r",n);
	printf("Your surname is %s \r",sn);
	return 0;
}
