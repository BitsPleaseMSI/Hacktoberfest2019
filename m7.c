#include<stdio.h>

void main()
{
  int i, n, t1 = 0, t2 = 1, next;
    printf("Enter the number to find series");
    scanf("%d", &n);

    printf("Fibonacci Series till nummber entered is ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
  
}
