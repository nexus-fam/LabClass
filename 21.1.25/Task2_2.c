#include<stdio.h>

int main(){
    float salary, increment;
    printf("Enter salary: ");
    scanf("%f",&salary);

    if( salary<8000 || salary>100000) {
        printf("Your salary is invalid for increment");
    }

    else{
        if(salary>=50000){
            increment=salary*0.15;
        }

        else{
            increment=salary*0.10;
        }
        salary +=increment;
    printf("Increment:%.3f\nTotal_salary:%.3f", increment, salary);
    return 0;
    }
    
}