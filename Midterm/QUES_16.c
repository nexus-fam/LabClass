#include <stdio.h>
#include <math.h>
int main() {
    int n, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = n; i > 0; i/=10){
        sum += i%10;
    }
    printf("The sum of the digits is %d.\n", sum);
    return 0;
}