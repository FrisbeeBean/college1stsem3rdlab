#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s+=i;
	printf("The sum of first n natural numbers is %d",s);
	return 0;	
}
