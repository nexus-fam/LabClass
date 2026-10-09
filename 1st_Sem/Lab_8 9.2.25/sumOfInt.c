#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    for(int i=1; n!=0; i++){
        sum += n%10; 
        n = n/10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}