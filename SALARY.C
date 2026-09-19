#include <stdio.h>
int main(){
	float sal,hra,da,gross;
	int category;
	printf("ENTER THE BASIC SALARY:");
	scanf("%f",&sal);
	if (sal<0)
	printf("\nINVALID SALARY");
	if (sal<=10000)
	category = 1;
	else if(sal<=20000)
	category = 2;
	else
	category = 3;

	switch(category){
		case 1:
		hra = sal*0.20;
		da = sal*0.80;
		break;

		case 2:
		hra = sal*0.25;
		da = sal*0.90;
		break;

		case 3:
		hra = sal*0.30;
		da = sal*0.95;
		break;

		default:
		printf("\nERROR IN CALCULATION");
	}
	gross = sal+hra+da;
	printf("\n---SALARY BREAKDOWN---");
	printf("\nBASIC SALARY :%.2f",sal);
	printf("\nHRA          :%.2f",hra);
	printf("\nDA           :%.2f",da);
	printf("\nGROSS SALARY :%.2f",gross);
	printf("\n\nTIYA BANSAL S3-52");
	return 0;
}