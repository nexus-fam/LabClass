#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area, pert;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    pert = a + b + c;
    s = pert / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\nArea of triangle:%.2f and Perimeter:%.2f", area, pert);
    return 0;
}