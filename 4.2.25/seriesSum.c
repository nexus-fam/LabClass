#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the last term of the series: ");
    scanf("%d", &n);
    for (i = 3; i <= n; i += 3)
    {
        sum += i;
    }
    printf("Sum= %d", sum);
    return 0;
}