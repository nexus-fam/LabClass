#include <stdio.h>
int main() {
    int n, x= 0, y =1, sum=1;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("%d %d", x, y);
    for(int i = 2; i < n; i++){
        sum = x + y;
        x = y;
        y = sum;
        printf(" %d", sum);
    }
    return 0;
}