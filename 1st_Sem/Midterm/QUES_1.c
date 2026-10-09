#include <stdio.h>
#include<math.h>

int main() {
    float a, b, c, s, peri, area;
    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    peri = a + b + c;
    s = peri/2;
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %.2f\nperi = %.2f", area, peri);
    return 0;
}