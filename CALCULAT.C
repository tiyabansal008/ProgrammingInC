#include <stdio.h>
int main()
{
	int n1=0,n2=0,result=0;
	char opr;
	printf("\nENTER FIRST NUMBER:");
	scanf("%d",&n1);
	printf("\nENTER SECOND NUMBER:");
	scanf("%d",&n2);
	printf("\nENTER OPERATOR(+,-,*,/)");
	scanf(" %c",&opr);

	switch(opr) {
		case '+':
			result=n1+n2;
			printf("\nRESULT=%d",result);
			break;
		case '-':
			result=n1-n2;
			printf("\nRESULT=%d",result);
			break;
		case '*':
			result=n1*n2;
			printf("\nRESULT=%d",result);
			break;
		case '/':
			result=n1/n2;
			printf("\nRESULT=%d",result);
			break;
		default:
			printf("\nINVALID OPERATOR");
			break;


	}
	return 0;
}