#include<stdio.h>
int main(){
int  age1,age2,age3,min;
printf("Enter three ages:");
scanf("%d %d %d",&age1,&age2,&age3);
if(age1<age2){
    if(age1<age3){
        min=age1;
    }

else {
    min=age3;
}
}
else {
    if(age2<age3){
    min=age2;
    }
else{
    min=age3;
}
}
printf("min= %d",min);
return 0;
}
