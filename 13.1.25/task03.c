#include <stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("%d is even", x);
    }
    else
    {
        printf("%d is odd", x);
    }

    return 0;
}