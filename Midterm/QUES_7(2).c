// 7. Write a C program to find the largest among three numbers

#include<stdio.h>

int main(){

    int  a , b, c , large;

    printf("Enter three ages:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){

            large = a;

    }
    else if(b>a && b>c){

            large = b;

    }
    else{

            large = c;
    }


    printf("Large= %d",large);

return 0;
}