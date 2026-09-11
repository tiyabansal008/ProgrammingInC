#include <stdio.h>
int main()
{
	int num,first_digit,last_digit ;
	printf("\nENTER A THREE DIGIT NUMBER:");
	scanf("%d",&num);
	first_digit = num/100;
	last_digit = num%10;
	if(first_digit==last_digit)
	printf("\nNUMBER ENTERED IS PALINDROME");
	else
	printf("\nNUMBER ENTERED IS NOT PALINDROME");



	printf("\nTIYA BANSAL S3-52");
	return 0;
}