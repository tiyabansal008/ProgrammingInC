#include <stdio.h>
int main()
{
	int a=1,b=1,c,n,i=2;
	printf("\nENTER NO. OF TERMS : ");
	scanf("%d",&n);
	printf("\n%d %d",a,b);
	for (i=1;i<=n-2;i++)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
	}
	printf("\n\nTIYA BANSAL S3-52");
	return 0;

}