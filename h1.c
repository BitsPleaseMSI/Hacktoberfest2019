//Code to print the following series 
//  555555555
//  544444445
//  543333345
//  543222345
//  543212345
//  543222345
//  543333345
//  544444445
//  555555555


#include<stdio.h>

int main()
{
	int a,s;

	printf("Enter the number : ");
	scanf("%d",&a);
  
    s=a;
	for(int i=0;i<((2*a)+1)/2;++i)
	{
		if(i==0)
			for(int j=1;j<(2*a)-1;++j)
			  printf("%d ",a);
		else
		   {   				  
          printf("%d ",a);
				for(int j=0;j<i-1;++j)
				    printf("%d ",a-j-1);
				for(int j=0;j<(2*s)-1;++j)
  			        printf("%d ",s);
				for(int j=i-1;j>0;--j)
  			        printf("%d ",a-j);

		   }
		printf("%d\n",a);
		s--;
	}
		s++;
	for(int i=(2*a-3)/2;i>=0;--i)
	{   s++;
		if(s==a)
			for(int j=0;j<(2*a)-1;++j)
                printf("%d ",a);
		else
			{
            printf("%d ",a);

				for(int j=0;j<i-1;++j)
				    printf("%d ",a-j-1);
				for(int j=0;j<(2*s)-1;++j)
  			        printf("%d ",s);
				for(int j=i-1;j>0;--j)
  			        printf("%d ",a-j);
				printf("%d",a);
			  }
        printf("\n");
	}

return 0;
}
