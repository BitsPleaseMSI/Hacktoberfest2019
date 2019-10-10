#include <stdio.h>

void main()
{
    int j,n;
    printf("Enter how many lines");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}
