#include <stdio.h>

int main(){

int i ,j;

int a[3][3] ;
int b[3][3] ;
int c[3][3] ;

printf("Enter 1st matrix elements: \n");

    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

printf("Enter 2nd matrix elements: \n");

    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }

  // matrix addition

      for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

  printf("Result matrix: \n");
  for(i = 0;i<3;i++){
    for(j = 0;j<3;j++){
        printf("%d ",c[i][j]);
    }
     printf("\n");
  }


return 0;
}
