// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
void Reverse(int);
void Reverse(int n)
{
    if (n == 0)
        return;
    printf("%d", n % 10);
    Reverse(n / 10);
}
int main()
{
    int x;
    printf("enter a number = ");
    scanf("%d", &x);
    printf("Reverse number = ");
    Reverse(x);
    return 0;
}