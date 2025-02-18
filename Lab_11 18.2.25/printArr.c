#include<stdio.h>
int main(){
    int i, n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i++){
        printf("ar[%d]=%d ",i, ar[i]);
    }
    return 0;
}