// 3. Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void OddNatural(int);
int main()
{
    int n;
    printf("enter a natural number = ");
    scanf("%d", &n);
    OddNatural(n * 2 - 1);
    return 0;
}
void OddNatural(int x)
{
    if (x >= 1)
    {
        OddNatural(x - 2);
        printf("%d ", x);
    }
}