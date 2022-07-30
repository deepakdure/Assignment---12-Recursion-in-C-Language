// 4. Write a recursive function to print first N Odd natural numbers in reverse order
#include <stdio.h>
void RevOddNatural(int);
int main()
{
    int n;
    printf("enter a natural number = ");
    scanf("%d", &n);
    RevOddNatural(n * 2 - 1);
    return 0;
}
void RevOddNatural(int x)
{
    if (x >= 1)
    {
        printf("%d ", x);
        RevOddNatural(x - 2);
    }
}