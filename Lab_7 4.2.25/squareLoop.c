#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter the last term of the series: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    printf("%d", sum);
    return 0;
}