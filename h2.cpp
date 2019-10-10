#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
    int r,c,k;
    int sparseMatrix[5][6] =
    {
	{0 , 0 , 0 , 0 , 9, 0 },
	{0 , 8 , 0 , 0 , 0, 0 },
	{4 , 0 , 0 , 2 , 0, 0 },
	{0 , 0 , 0 , 0 , 0, 5 },
	{0 , 0 , 2 , 0 , 0, 0 }
    };

    int resultMatrix[30][3];

    k = 0;
    for (r = 0; r < 5; r++)
	for (c = 0; c < 6; c++)
	    if (sparseMatrix[r][c] != 0)
	    {
		resultMatrix[k][0] = r;
		resultMatrix[k][1] = c;
		resultMatrix[k][2] = sparseMatrix[r][c];
		k++;
	    }

    cout<<"Triplet Representation : "<<endl;
    for (r=0; r<k; r++)
    {
	for (c= 0; c<3; c++)
	cout<<resultMatrix[r][c]<<" ";

	cout<<endl;
    }
    getch();
}
