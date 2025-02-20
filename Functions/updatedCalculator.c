// Lizzie DeLong, Updated C Financial Claculator with Functions

#include <stdio.h>
#include <math.h>

float userInputs(char expense[]){
    printf("What is your monthly %s:\n", expense);
}

float calculatePercent(float expenseOne, float expenseTwo){
    return (expenseOne/expenseTwo)*100;
}

int main(void){
    printf("Hello! This is your new personal financial calculator to help you with your money! \n");
    
    float income = userInputs("income");
    scanf("%f", &income);
    float rent = userInputs("rent/morage payment");
    scanf("%f", &rent);
    float utilities = userInputs("utilities payment");
    scanf("%f", &utilities);
    float groceries = userInputs("groceries spending");
    scanf("%f", &groceries);
    float transport = userInputs("transportation spending");
    scanf("%f", &transport);
    float savings = income*0.1;
    float spending = income-savings-rent-utilities-groceries-transport;

    float rentPercent = calculatePercent(rent, income);
    float utilitiesPercent = calculatePercent(utilities, income);
    float groceriesPercent = calculatePercent(groceries, income);
    float transportPercent = calculatePercent(transport, income);
    float spendingPercent = calculatePercent(spending, income);

    printf("Your rent bill is $%.2f which is %.2f percent of your income. \n", rent, rentPercent);
    printf("Your utilities bill is $%.2f which is %.2f percent of your income. \n", utilities, utilitiesPercent);
    printf("Your groceries spending is $%.2f which is %.2f percent of your income. \n", groceries, groceriesPercent);
    printf("Your tranportstion cost is $%.2f which is %.2f percent of your income. \n", transport, transportPercent);
    printf("The monthly savings you should put away is $%.2f, which is 10 percent of your income. \n", savings);
    printf("Your spending money left is $%.2f which is %.2f percent of your income.", spending, spendingPercent);
    return 0;
}