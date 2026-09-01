#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d;
	float r1,r2;
	printf("\nENTER THE COEFFICIENT OF X^2:");
	scanf("%d",&a);
	printf("\n\nENTER THE COEFFICIENT OF X:");
	scanf("%d",&b);
	printf("\n\nENTER THE CONSTANT TERM:");
	scanf("%d",&c);
	d= (b*b)-(4*a*c);
	if (d>=0){
			r1 = ((-b)+(sqrt(d)))/(2*a);
			r2 = ((-b)-(sqrt(d)))/(2*a);
			printf("\n\nTHE ROOTS ARE : %f , %f",r1,r2);
		 }
	else
	printf("\n\nTHE ROOTS ARE IMAGINARY");

	printf("\n\nTIYA BANSAL S3-52");
	return 0;
 }


