#include <stdio.h>
int main()
{
    float l, w, pert, area;
    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);
    pert = 2 * (l + w);
    area = l * w;
    printf("The area of rectangle is:%.2f and perimeter is:%.2f", area, pert);
    return 0;
}