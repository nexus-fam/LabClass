#include<stdio.h>
int main(){
int num;
printf("enter any number;");
scanf("%d",&num);
 int r= num%2;
 switch(r){
 case 1:
        printf("the number is odd");
        break;
 case 0:
        printf("the number is even");
        break;
}
return 0;
}
