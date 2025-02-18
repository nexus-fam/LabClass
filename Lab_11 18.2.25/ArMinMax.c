#include<stdio.h>
int main(){
    int i, n, min, max;
    char ch=' ';
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    min=ar[0];
    max =ar[0];
    for(i=1;i<n;i++){
        if(ar[i]<min){
            min=ar[i];
        }
        if(ar[i]>max){
            max=ar[i];
        }
}
printf("Min=%d\nMax=%c %d ",min,ch,max);
return 0;
}