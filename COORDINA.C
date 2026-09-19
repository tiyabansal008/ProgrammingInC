#include <stdio.h>
int main()
{
	int x;
	int y;
	printf("ENTER X COORDINATE:");
	scanf("%d",&x);
	printf("\nENTER Y COORDINATE:");
	scanf("%d",&y);
	if(x>0 && y>0)
	printf("\n1ST QUADRANT");
	else if(x>0 && y<0)
	printf("\n4RTH QUADRANT");
	else if(x<0 && y>0)
	printf("\n2ND QUADRANT");
	else
	printf("\n3RD QUADRANT");

	printf("\nTIYA BANSAL S3-52");
	return 0;

}