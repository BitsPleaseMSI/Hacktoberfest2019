#include <stdio.h>

void main()
{
    int i,j,k;
    printf("Enter no of lines ");
    scanf("%d",&k);
    
    //main code logic
    for(i=1;i<=k;i++)
    {
        for(j=k;j>=i;j--)
        printf("*");
        printf("\n");
    }
}
