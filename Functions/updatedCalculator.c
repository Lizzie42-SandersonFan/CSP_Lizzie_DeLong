// Lizzie DeLong, Updated C Financial Claculator with Functions

#include <stdio.h>
#include <math.h>

struct Finances {
    float income;
    float rent;
    float utilities;
    float groceries;
    float transport;
    float savings;
    float spending;

    float rentPercent;
    float utilitiesPercent;
    float groceriesPercent;
    float transportPercent;
    float spendingPercent;
};

float calculateFinances(struct Finances *f) {  
    f->savings = f->income * 0.1; // 10% of income  
    f->spending = f->income - f->savings - f->rent - f->utilities - f->groceries - f->transport;  
}  


float userInputs(struct Finances *f) {
    printf("What is your monthly income: \n");
    scanf("%lf", &f->income);
    printf("What is your monthly rent payment: \n");
    scanf("%lf", &f->rent);
    printf("What is your monthly utilities payment: \n");
    scanf("%lf", &f->utilities);
    printf("What is your monthly grocerie spending: \n");
    scanf("%lf", &f->groceries);
    printf("What is your monthly transportation spending: \n");
    scanf("%lf", &f->transport);
}

float percentOfExpenses(struct Finances *f) {
    f->rentPercent = (f->rent/f->income)*100;
    f->utilitiesPercent = (f->utilities/f->income)*100;
    f->groceriesPercent = (f->groceries/f->income)*100;
    f->transportPercent = (f->transport/f->income)*100;
    f->spendingPercent = (f->spending/f->income)*100;
}

const char* printPercentages(struct Finances *f) {  
    printf("Rent: %.f%%\n", f->rentPercent);  
    printf("Utilities: %.f%%\n", f->utilitiesPercent);  
    printf("Groceries: %.f%%\n", f->groceriesPercent);  
    printf("Transport: %.f%%\n", f->transportPercent);  
    printf("Spending: %.f%%\n", f->spendingPercent);  
}  

int main(void){
    printf("Hello! This is your new personal financial calculator to help you with your money! \n");
    struct Finances myFinaces;
    userInputs(&myFinaces);
    calculateFinances(&myFinaces);
    percentOfExpenses(&myFinaces);
    printPercentages(&myFinaces);
    return 0;
}