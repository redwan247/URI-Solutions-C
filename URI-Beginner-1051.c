#include<stdio.h>
int main()
{
    float Salary, Tax, temp;

    scanf("%f", &Salary);

    if(Salary < 2000.01){
        printf("Isento\n");
    }

    else if(Salary > 2000.00 && Salary <= 3000.00){
        Salary = Salary - 2000.00;
        Tax = Salary * 0.08;
        printf("R$ %0.2f\n", Tax);
        }

        else if(Salary > 3000.00 && Salary <= 4500.00){
        temp = Salary - 3000.00;
        Salary = Salary - temp;
        temp = temp * 0.18;
        Salary = Salary - 2000.00;
        Tax = Salary * 0.08;
        Tax = Tax + temp;
        printf("R$ %0.2f\n", Tax);
        }

        else if(Salary > 4500.00){
        temp = Salary - 4500.00;
        Salary = Salary - temp;
        temp = temp * 0.28;
        Tax = temp;
        temp = Salary - 3000.00;
        Salary = Salary - temp;
        temp = temp * 0.18;
        Tax = Tax + temp;
        Salary = Salary - 2000.00;
        temp = Salary * 0.08;
        Tax = Tax + temp;
        printf("R$ %0.2f\n", Tax);
        }

    return 0;
}
