// 1. Write a recursive function to print first N natural numbers
#include <stdio.h>
void natural(int n);
int main()
{
    int a;
    printf("enter a number = ");
    scanf("%d", &a);
    natural(a);
    return 0;
}
void natural(int n)
{
    if (n >= 1)
    {
        natural(n - 1);
        printf("%d ", n);
    }
}
