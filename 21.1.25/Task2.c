#include<stdio.h>
int main()
{
    float salary, increment, total_salary;
    printf("Enter your salary:");
    scanf("%f", &salary);
    if (salary >= 50000 && salary <= 100000)
    {
        increment = (salary * 0.15);
    }
    else if (salary >= 8000 && salary < 50000)
    {
        increment = (salary * 0.1);
    }
    else
    {
        printf("variable invalid:");
    }
    total_salary=(salary + increment);
    printf("Increment %.2f total %.2f", increment, total_salary);
    return 0;
}
