#include<ctype.h>
#include<stdio.h>
int main(){
    char ch =getchar();
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')printf("Vowel");
    else printf("Consonant");
    return 0;
    
}