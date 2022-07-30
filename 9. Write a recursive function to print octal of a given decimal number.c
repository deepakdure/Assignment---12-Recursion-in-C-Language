// 9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void Octal(int);
void Octal(int x)
{
    if (x == 0)
        return;
    Octal(x / 8);
    printf("%d", x % 8);
}
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Octal of %d = ", n);
    Octal(n);
    return 0;
}