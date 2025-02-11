#include<stdio.h>
#include<ctype.h>
int main(){
    char ch= getchar();
    if(isupper(ch)) putchar(tolower(ch));
    else putchar(toupper(ch));
    
    isupper(ch)?putchar(tolower(ch)):putchar(toupper(ch));
    return 0;
}