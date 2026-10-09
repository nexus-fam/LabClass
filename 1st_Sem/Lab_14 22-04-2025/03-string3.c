#include <stdio.h>
#include <string.h>


int main(){

    char a[30] , b[30] , i;

   printf("Enter  string a : ");
   gets(a);

   int n = strlen(a);

   for(i = 0; i <n;i++){
      printf("%c ",a[i]);
   }


return 0;
}
