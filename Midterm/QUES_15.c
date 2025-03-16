#include <stdio.h>
#include <math.h>
int main() {
    int n, count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = n; i > 0; i /= 10){
        count++;
    }
    printf("The number of digits in the number is %d.\n", count);
    return 0;
}