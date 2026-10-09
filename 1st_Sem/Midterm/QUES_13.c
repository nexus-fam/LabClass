#include <stdio.h>
#include <math.h>
int main() {
    int n;
    float sum=1;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        sum += 1/pow(i, i);
    }
    printf("The sum of the series is %.2f.\n", sum);

    //used a different way to calculate the sum of the series
    sum = 1;
    for(int i = 2; i <= n; i++){
        float det = 1;
        for( int j = 1; j <= i; j++){
            det *= i;
        }
        sum += 1/det;
    }
    printf("The sum of the series is %.2f.\n", sum);
    return 0;
}