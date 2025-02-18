#include<stdio.h>
int main(){
    int i, n,odd=0,even=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        ar[i]%2==0?even++:odd++;
        }
        printf("Odd=%d Even=%d",odd,even);
        return 0;
    }