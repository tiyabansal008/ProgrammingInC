/*******************************************
Statement - Calculate sum, product,difference and remainder of two no.s entered by user 
Programmer - Tiya Bansal
Written For - Programming lab (1st Sem)
********************************************/

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
	printf("\n\nTIYA BANSAL S3-52");
        return 0 ;



}