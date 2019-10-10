#include<stdio.h>
#include<conio.h>
void main()
{
  int i, n, t1 = 0, t2 = 1, next;
  clrscr();
    printf("Enter the number to find series");
    scanf("%d", &n);

    printf("Fibonacci Series till nummber entered is ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    getch();
}
