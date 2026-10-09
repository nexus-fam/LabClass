#include <stdio.h>
#include <string.h>


int main(){

    char a[30] , b[30] , c[30];

    printf("Enter  string a : ");
    // scanf("%s",a); // read a single word
    // gets(a);

   // fgets(a,sizeof(a),stdin);

    gets(a);
   // printf("output = %s",a);
   // puts(a);

   //1. string copy

   strcpy(b,a);
   printf("Copied String b =  %s\n",b);

   //2. string  concatenation

       printf("Enter  string c : ");
        //  fgets(c,sizeof(c),stdin);

        gets(c);

   strcat(a , c);
    printf("After concat a =  %s\n",a);

    //3. string length

    printf("leangth of a = %d\n",  strlen(a));

    //4. reverse string

       strrev(b);
       printf("After reverse b =  %s\n",b);

    //5. compare string

    int e =strcmp(a,b);

    printf("%d\n",e);


return 0;
}
