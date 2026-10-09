#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for(int i = 2 ; i <= n ; i+=2) {
        sum += i;
    }
    printf("The sum of even numbers upto %d is %d.\n", n, sum);
    return 0;
}