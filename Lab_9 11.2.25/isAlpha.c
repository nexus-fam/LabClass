#include<stdio.h>
#include<ctype.h>
int main(){
    char ch = getchar();
    if(isalpha(ch))printf("Alphabet\n");
    else printf("Not Alphabet\n");
(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')?printf("Alphabet"):printf("Not Alphabet");
    return 0; 
}