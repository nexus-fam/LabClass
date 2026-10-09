#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter The Number of Integers: ");
    scanf("%d", &n);
    for(int i=1; n != 0; i++){
        sum *= 10;
        sum += n%10;
        n = n/10;
    }
    printf("Reversed Sum: %d\n", sum);
    return 0;
}