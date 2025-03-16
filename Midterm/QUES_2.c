#include <stdio.h>

int main() {
    float a, b, peri, area;
    printf("Enter the sides of the rectangle: ");
    scanf("%f%f", &a, &b);
    peri = 2*(a+b);
    area =a*b;
    printf("area = %.2f\nperi = %.2f", area, peri);
    return 0;
}