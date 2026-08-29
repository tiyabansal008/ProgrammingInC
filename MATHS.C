#include <stdio.h>
int main()
{
	int a,b;
	int sum,diff,prod,rem ;
	printf("\n ENTER 1ST NUMBER: ");
	scanf("%d",&a);
	printf("\n ENTER 2ND NUMBER: ");
	scanf("%d",&b);
	sum=a+b;
	diff=a-b;
	prod=a*b;
	rem=a%b;
	printf("\n SUM = %d: DIFFERENCE = %d: PRODUCT = %d: REMAINDER = %d",sum,diff,prod,rem);
	return 0 ;



}