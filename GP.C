#include <stdio.h>
int main()
{
	int a,r,n;
	int sum,term;
	int i;
	printf("\nENTER FIRST TERM OF GP:");
	scanf("%d",&a);
	printf("\n\nENTER COMMON RATIO OF GP:");
	scanf("%d",&r);
	printf("\n\nENTER TOTAL NO. OF TERMS:");
	scanf("%d",&n);
	term=a
	for(i=0;i<=n;i++)
	{
		sum=sum+term;
		term=term*r;
	}
	printf("\n\nSUM OF GP IS: %d",sum);
	printf("\n\nTIYA BANSAL S3-52");
}