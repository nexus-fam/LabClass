#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        // Here we are starting from n and going till i
        for(int j = n; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}