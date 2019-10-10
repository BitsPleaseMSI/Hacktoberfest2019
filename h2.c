#include<stdio.h>
#include<stdlib.h>

 void main()
 { int **arr,row,col,i,j,count,**art,ctr;
  
   printf("Enter row and column\n");
    scanf("%d%d",&row,&col);
	 count=0;ctr=0;
    arr=(int**)malloc(sizeof(int)*row);
     for(i=0;i<row;i++)
     arr[i]=(int*)malloc(sizeof(int)*col);
    printf("Enter element row-wise\n");
    for(i=0;i<row;i++)
     for(j=0;j<col;j++)
     {scanf("%d",&arr[i][j]);
	   if(arr[i][j]!=0)
	    count++;
     }
   art=(int**)malloc(sizeof(int)*(count+1));
    for(i=0;i<(count+1);i++)
     art[i]=(int*)malloc(sizeof(int)*3);

     art[ctr][0]=row;
     art[ctr][1]=col;
     art[ctr][2]=count;

   for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    if(arr[i][j]!=0)
    {   ctr++;
	art[ctr][0]=i;
	art[ctr][1]=j;
	art[ctr][2]=arr[i][j];
    }
    printf("\n\t\t3 notation matrix \n");
    for(i=0;i<count+1;i++)
    { printf("\n");
      for(j=0;j<3;j++)
      printf("%d",art[i][j]);
    }

}
