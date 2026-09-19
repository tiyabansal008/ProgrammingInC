#include <stdio.h>
#include <string.h>

int main()
{
	char num[10];
	int i=0,len;
	printf("ENTER A NUMBER:");
	scanf("%s",&num);
	printf("\n");
	len=strlen(num);
	for (i=0;i<len;i++){
		switch (num[i]){
			case '0':
			printf("ZERO ");
			break;
			case '1':
			printf("ONE ");
			break;
			case '2':
			printf("TWO ");
			break;
			case '3':
			printf("THREE ");
			break;
			case '4':
			printf("FOUR ");
			break;
			case '5':
			printf("FIVE ");
			case '6':
			printf("SIX ");
			break;
			case '7':
			printf("SEVEN ");
			break;
			case '8':
			printf("EIGHT ");
			break;
			case '9':
			printf("NINE ");
			break;
			default:
			printf("INVALID CHARACTER");
			break;
		}

	}
	printf("\nTIYA BANSAL S3-52");
	return 0;
}