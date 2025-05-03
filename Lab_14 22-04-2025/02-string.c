#include <stdio.h>
#include <string.h>


int main(){

    char a[30] , b[30] ;

   printf("Enter  string a : ");
   gets(a);

  printf("Enter  string b : ");
   gets(b);

    //5. compare string

    int e =strcmp(a,b);

    printf("e = %d\n",e);

    if(e > 0){
        printf("a>b\n");
    }
    else if(e < 0){
        printf("a<b\n");
    }
    else{
            printf("a== b\n");
    }


return 0;
}
