#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a==b && b==c) {
        printf("Equilateral triangle\n");
    } else if (a==b || b==c || a==c) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }
}
