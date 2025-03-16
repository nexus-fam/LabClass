#include <stdio.h>

int main() {
    int f,c;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &f);
    c = (f-32)*5/9;
    printf("The temperature in Celsius is %d.\n", c);
    return 0;
}