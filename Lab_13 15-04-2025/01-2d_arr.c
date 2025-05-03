#include <stdio.h>

int main(){

// int arr[3][3]; // declare an array

int i ,j;

 int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // compile time ini

    // print 1st arrary
  for(i = 0;i<3;i++){
    for(j = 0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

int arr2[3][3] ;

// input 2nd arrary from user

  for(i = 0;i<3;i++){
    for(j = 0;j<3;j++){
        scanf("%d",&arr2[i][j]);
    }

  }

  // print 2nd arrary
  for(i = 0;i<3;i++){
    for(j = 0;j<3;j++){
        printf("%d ",arr2[i][j]);
    }
     printf("\n");
  }


return 0;
}
