#include <stdio.h>
int main()
{
	int num,rev,org,rem ;
	printf("\nENTER NUMBER:");
	scanf("%d",&num);
	org=num;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==org)
	printf("\nNO. ENTERED IS PALINDROME");
	else
	printf("\nNO. ENTERED IS NOT PALINDROME");


	return 0;
}