//find whether a character is a vowel or consonant
//if it is not an alphabet, print "Not an alphabet"
#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(isalpha(c)){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            printf("Vowel\n");
        }else{
            printf("Consonant\n");
        }
    }else{
        printf("Not an alphabet\n");
    }
    return 0;
}