// 2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void RevNatural(int);
int main()
{
    int n;
    printf("enter a natural number = ");
    scanf("%d", &n);
    RevNatural(n);
    return 0;
}
void RevNatural(int x)
{
    if (x >= 1)
    {
        printf("%d ", x);
        RevNatural(x - 1);
    }
}