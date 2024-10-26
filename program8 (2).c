#include<stdio.h>
int main()
{
	int c,n;
	printf("Enter value\n");
	scanf("%d",&n);
	for(c=0;n!=0;c++)
	n/=10;
	printf("The length of the number is %d",c);
	return 0;	
}
