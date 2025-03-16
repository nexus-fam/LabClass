#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int n1 = n; // Store the original value of n
// The solution is to first reverse the number and then print the digits of the reversed number. this way the reverse number would print the original number in proper order.
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    while(rev>0){
        printf("%d\n", rev%10);
        rev/=10;
    }
// second way to do the same thing
    int count = 0;
    for(int i = n1; i > 0; i /= 10){
        count++;
    }
    
    for(int i = pow(10, count-1)+1; i > 0; i /= 10){
        printf("%d\n", n1 / i);
        n1 %= i;
    }
    
    return 0;
}