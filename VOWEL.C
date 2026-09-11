#include <stdio.h>
int main()
{
	char ch;
	printf("\nENTER ALPHABET:");
	scanf(" %c",&ch);

	switch (ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("\nALPHABET ENTERED IS A VOWEL");
			break;
		default :
			printf("\nALPHABET ENTERED IS A CONSONANT");
			break;
	}
	printf("\nTIYA BANSAL S3-52");
	return 0;
}