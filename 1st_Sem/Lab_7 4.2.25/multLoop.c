#include <stdio.h>
int main()
{
    int i, n, sum = 1;
    printf("Enter the last term of the series: ");
    scanf("%d", &n);
    for (i = 4; i <= n; i += 4)
    {
        sum *= i;
    }
    printf("%d", sum);
    return 0;
}