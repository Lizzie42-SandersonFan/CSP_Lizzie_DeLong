// Lizzie DeLong, Updated C Financial Claculator with Functions

#include <stdio.h>
#include <math.h>

int main(void){
    // Print hi and tell user what this program does
    printf("Hello! This is your new personal financial calculator to help you with your money! \n");
    // user input of income (variable)
    float income;
    printf("What is your monthly income: \n");
    scanf("%f", &income);
    // user input of rent (variable)
    float rent;
    printf("What is your monthly rent payment: \n");
    scanf("%f", &rent);
    // user input of utilities (variable)
    float utilities;
    printf("What is your monthly utilities payment: \n");
    scanf("%f", &utilities);
    // user input of groceries (variable)
    float groceries;
    printf("What is your monthly grocerie spending: \n");
    scanf("%f", &groceries);
    // user input of transportaion (variable)
    float transport;
    printf("What is your monthly transportation spending: \n");
    scanf("%f", &transport);
    // calculate savings as 10% of income(income * .1) (variable)
    float savings = income*0.1;
    // calculate spending as income-savings-rent-utilities-groceries-treansport
    float spending = income-savings-rent-utilities-groceries-transport;

    // calculate percent income of rent (rent/income*100) (varible)
    float rentPercent = (rent/income)*100;
    // calculate percent income of utilities (utilites/income*100) (varible)
    float utilitiesPercent = (utilities/income)*100;
    // calculate percent income of groceries (groceries/income*100) (varible)
    float groceriesPercent = (groceries/income)*100;
    // calculate percent income of transportaion (transportaion/income*100) (varible)
    float transportPercent = (transport/income)*100;
    // calculate percent income of spending (spending/income*100) (varible)
    float spendingPercent = (rent/income)*100;

    // your rent is $XX.XX which is XX% of your income. (print)
    printf("Your rent bill is $%f which is %f of your income. \n", rent, rentPercent);
    // your utilities is $XX.XX which is XX% of your income. (print)
    printf("Your utilities bill is $%f which is %f of your income. \n", utilities, utilitiesPercent);
    // your groceries is $XX.XX which is XX% of your income. (print)
    printf("Your groceries spending is $%f which is %f of your income. \n", groceries, groceriesPercent);
    // your transportion is $XX.XX which is XX% of your income. (print)
    printf("Your tranportstion cost is $%f which is %f of your income. \n", transport, transportPercent);
    // your savings is $XX.XX which is XX% of your income. (print)
    printf("The monthly savings you should put away is $%f. \n", savings);
    // your spending is $XX.XX which is XX% of your income. (print)
    printf("Your spending money left is %%f which is %f of your income", spending, spendingPercent);
    return 0;
}