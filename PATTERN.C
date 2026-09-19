
#include <stdio.h>
int main()
{
	int i,j;
	int choice;
	printf("Select pattern to display:");
	printf("\nEnter 1 for STAR PATTERN");
	printf("\nEnter 2 for NUMBER PATTERN\n");
	scanf("%d",&choice);
	switch (choice){
		case 1:

			for(i=0;i<5;i++){
				for(j=0;j<=i;j++){
					printf("* ");


				}
				printf("\n");
			}
			break;
		case 2:
		for (i=1;i<=4;i++){
			for (j=1;j<=i;j++){
				printf("%d",j);
			}
			for (j=i-1;j>=1;j--){
				printf("%d",j);
			}
			printf("\n");
		}
		break;

		default:
		printf("\nInvalid choice");
		break;
	}
	printf("\nTIYA BANSAL S3-52");
	return 0;
}