#include<stdio.h>
int main(){
    float salary, increment;
    int incrementP;
    scanf("%f",&salary);
    if(salary >= 0 && salary <= 400.00){
        increment = salary * 0.15;
        salary = salary + increment;
        incrementP = 15;
    }
    else if(salary >= 400.01 && salary <= 800.00){
        increment = salary * 0.12;
        salary = salary + increment;
        incrementP = 12;
    }
    else if(salary >= 800.01 && salary <= 1200.00){
        increment = salary * 0.10;
        salary = salary + increment;
        incrementP = 10;
    }
    else if(salary >= 1200.01 && salary <= 2000.00){
        increment = salary * 0.07;
        salary = salary + increment;
        incrementP = 7;
    }
    else if(salary>2000.00){
        increment = salary * 0.04;
        salary = salary + increment;
        incrementP = 4;
    }
    printf("Novo salario: %0.2f\n",salary);
    printf("Reajuste ganho: %0.2f\n",increment);
    printf("Em percentual: %d %%\n",incrementP);
    return 0;
}
