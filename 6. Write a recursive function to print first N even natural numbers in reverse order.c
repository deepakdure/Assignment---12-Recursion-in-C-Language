// 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void EvenNatural(int);
int main()
{
    int n;
    printf("enter a natural number = ");
    scanf("%d", &n);
    EvenNatural(n * 2);
    return 0;
}
void EvenNatural(int x)
{
    if (x >= 2)
    {
        printf("%d ", x);
        EvenNatural(x - 2);
    }
}