#include <stdio.h>

int main() {

    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    n%2==0?printf("Even"):printf("Odd");
    return 0;
}