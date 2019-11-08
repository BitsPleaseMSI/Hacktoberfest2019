#include <stdio.h>

int main() {

	int i,j,k,a[100],n,sum;
	float avg;
	scanf("%d",&n);
	i=n;
	j=1;
while(i>0)
{  j=1;
    while(j<=i)
    {
       printf("%d ",i);
       j++;
    }
    printf("\n");
    i--;
}

	
	return 0;
}
