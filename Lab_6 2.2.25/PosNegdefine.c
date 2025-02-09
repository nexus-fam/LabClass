#include <stdio.h>
int main (){
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);
    if ( num > 0){
        printf("%d is Positive.", num);
    }
    else if (num < 0){
        printf("%d is Negative.", num);
    }
    else {
        printf("%d is zero.", num);
    }
    return 0;
}
