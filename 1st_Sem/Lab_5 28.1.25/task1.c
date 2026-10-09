#include <stdio.h>
int main()
{
    int s = 1, marks, sum = 0;
input:
    printf("Enter Marks of Subject-%d: ", s);
    scanf("%d", &marks);
    if (marks >= 0 && marks <= 100)
    {
        sum += marks;
        s++;
    }

    else
        goto input;
    if (s < 4)
        goto input;
    printf("sum=%d", sum);
    return 0;
}