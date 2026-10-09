#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        printf("Right angled triangle\n");
    } else {
        printf("Not a right angled triangle\n");
    }
    return 0;
}