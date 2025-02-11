#include<stdio.h>
#include<ctype.h>
int main(){
    char ch = getchar();
    if(isdigit(ch))printf("A Digit\n");
    else printf("Not a Digit\n");
    (ch>='0'&&ch<='9')?printf("A Digit"):printf("Not a Digit");
    return 0; 
}