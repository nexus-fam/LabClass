#include <stdio.h>

int main() {
    
    
    int n = 5;
    
    for(int row = 1; row <= n;row++){
       
       for(int sp = row;sp < n;sp++){
           
           printf(" ");
           
       }
       for(int col = 1;col<=row;col++){
           
           printf("* ");
       }
       
       printf("\n");
       
    }
    
    for(int row = n -1; row >= 1;row--){
       
       for(int sp = n;sp >=row;sp--){
           
           printf(" ");
           
       }
       for(int col = row;col>=1;col--){
           
           printf("* ");
       }
       
       printf("\n");
       
    }
    
    
    
    
    return 0;
}
