//find prime number from 1 to n
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  // Assume the number is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not a prime number
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
