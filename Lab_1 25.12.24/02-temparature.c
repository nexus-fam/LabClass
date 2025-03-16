#include <stdio.h>

int main() {

   float f1 , c1 , f2 , c2;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f1);

    c1 = ( (f1 - 32) * 5) / 9;
    // c1 = ( ( f1 - 32) / 9) * 5;
    printf("%.3f Fahrenheit = %.3f Celsius \n", f1, c1);

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c2);


    f2 = ( ( c2 / 5 ) * 9 ) + 32;
    // f2 = ( ( c2 * 9 ) / 5 ) + 32
    printf("%.3f Celsius = %.3f Fahrenheit \n", c2, f2);



    return 0;
}
