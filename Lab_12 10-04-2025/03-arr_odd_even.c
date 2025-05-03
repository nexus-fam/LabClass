#include <stdio.h>

int main(){

  int n ,i;
  scanf("%d",&n);
  int arr[n];

  for(i =0 ;i<n;i++){

  scanf("%d",&arr[i]);

  }

   int odd = 0  , even = 0;

  for(i = 0 ;i<n;i++){

     if( arr[i] % 2 == 0) {
        even++;
      }
     else{
       odd++;
     }

  }

  printf("odd = %d\n even = %d", odd , even );
return 0;
}

