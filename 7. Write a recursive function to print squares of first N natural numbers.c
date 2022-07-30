// 7. Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
#include <conio.h>
void SquareNatural(int);
int main()
{
    int n;
    printf("enter a natural number = ");
    scanf("%d", &n);
    SquareNatural(n);
    getch();
    return 0;
}
void SquareNatural(int x)
{
    if (x == 0)
        return;
    SquareNatural(x - 1);
    printf("%d ", x * x);
}