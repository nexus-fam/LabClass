#include<stdio.h>

int main(){

    int  a , b, c , large;

    printf("Enter three num:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a >c){
            large = a;
        }

        else {
            large = c;
        }
    }
    else {
        if(b > c){
            large = b;
        }
        else{
            large = c;
        }
    }

    printf("large= %d",large);

return 0;
}