#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    float x1, x2;
    printf("Enter the values of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    d = b*b - 4*a*c;
    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("The roots are x1 = %.2f and x2 = %.2f.\n", x1, x2);
    }
    else if(d==0){
        x1=-b/(2*a);
        printf("The root is x1 = %.2f.\n", x1);
    }
    else{
        d=-d;
        x1=-b/(2*a);
        x2=sqrt(d)/(2*a);
        printf("The roots are x1 = %.2f + %.2fi and x2 = %.2f - %.2fi.\n", x1, x2, x1, x2);
    }
    return 0;
}