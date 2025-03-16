#include<stdio.h>
int main()
{
    int n , x=0 , y=1 , i , s;
    printf("N = ");
    scanf("%d", &n);
    printf("%d %d ", x , y);
    for(i=2; i< n; i++)
    {
        s = x+y;
        printf("%d ", s );
        x = y;
        y = s;
    }
    return 0;
}
