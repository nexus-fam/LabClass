#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float sum = 0;

    printf("Enter the last term of the series: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1 / (pow(i, i));
    }
    printf("%f", sum);
    return 0;
}