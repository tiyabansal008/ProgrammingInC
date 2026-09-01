#include <stdio.h>
int main()
{
	int grade;
	printf("\nENTER YOUR MARKS : ");
	scanf("%d",&grade);
	if (grade>=80 && grade<=100)
	printf("\nGRADE A");
	else if (grade>=60 && grade<=80)
	printf("\nGRADE B");
	else if(grade>=40 && grade<=60)
	printf("\nGRADE C");
	else
	printf("\nFAIL");


	printf("\nTIYA BANSAL S3-52");
	return 0;
}