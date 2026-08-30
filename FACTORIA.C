#include <stdio.h>
int main()
{
    int a,i,fact=1;
    printf("\nENTER NO. FOR FACTORIAL:");
    scanf("%d",&a);
    
    if (a<0)
    {
        printf("\nNO. ENTERED IS NEGATIVE");
    }
    else if (a==0)
    {
        printf("\nFACTORIAL = 1");
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            fact = fact*i;
        }
        printf("\nFACTORIAL = %d",fact);
    }
    printf("\n\nTIYA BANSAL S3-52");
    return 0;


}