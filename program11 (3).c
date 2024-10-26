#include<stdio.h>
int main()
{
	int n,i,s=0,a;
	printf("Enter value\n");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		i=n%10;
		n/=10;
		s=s*10+i;
	}
	if(s==a)
	printf("The number is a palindrome number");
	else
	printf("The number is not a palindrome number");
	return 0;	
}
