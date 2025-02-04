#include<stdio.h>
int main(){
int x,y;
char op;
printf("enter any two numbe=");
scanf("%d%d",&x,&y);
printf("enter operation type=");
scanf(" %c", &op);
switch(op)
{
case'+':
 printf("addition=%d",x+y);
 break;
 case'-':
 printf("substraction=%d",x-y);
 break;
 case'*':
 printf("multiplication=%d",x*y);
 break;
 case'/':
 printf("division=%d",x/y);
 break;
 default:
 printf("invalid input");
}
return 0;
}
