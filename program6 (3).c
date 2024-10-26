#include<stdio.h>
int main()
{
	int i,n,p=1;
	printf("Enter value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	p*=i;
	printf("The factorial of a number is %d",p);
	return 0;	
}
