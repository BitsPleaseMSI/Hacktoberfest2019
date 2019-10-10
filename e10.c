#include <stdio.h>

int main() {
	//code
	int i,j,k,a[100],n,sum;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sum=0;
	for(i=0;i<n;i++)
	sum+=a[i];
	avg=(float)sum/n;
	printf("Average is %2.2f",avg);
	
	return 0;
}
