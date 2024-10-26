#include<stdio.h>
int main()
{
	int a1=0,a2=1,i,n,s;
	printf("Enter value\n");
	scanf("%d",&n);
	printf("Fibonacci Series: 0, 1");
	for(i=1;i<=n;i++)
	{
		s=a1+a2;
		a1=a2;
		a2=s;
		printf(", %d",s);
	}
	return 0;
}
