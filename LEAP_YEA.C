#include <stdio.h>
int main()
{
	int year;
	printf("ENTER THE YEAR:");
	scanf("%d",&year);

	if (year%4==0 && year%100!=0)
	printf("\nLEAP YEAR");
	else if (year%400 == 0)
	printf("\nLEAP YEAR");
	else
	printf("\nNOT A LEAP YEAR");

	printf("\n\nTIYA BANSAL S3-52\n\n");
	return 0;

}