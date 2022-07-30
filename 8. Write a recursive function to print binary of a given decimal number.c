// 8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void Binary(int x);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("binary of %d = ", n);
    Binary(n);
    return 0;
}
void Binary(int x)
{
    if (x == 0)
        return;
    Binary(x / 2);
    printf("%d", x % 2);
}