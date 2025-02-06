// Lizzie DeLong, Expressions C practice

#include <stdio.h>
#include <math.h>

int main(void){
    // Equation One:7-24/8*4+6 = 1
    //variable
    int equationOne = 7-24/8*4+6;
    //print
    printf("Equation One: %d \n", equationOne);

    // Equation two: 18/3-7+2*5 = 9
    //variable
    int equationTwo = 18/3-7+2*5;
    //print
    printf("Equation Two: %d \n", equationTwo);

    //equation three: 6×4/12+72/8-9 = 2
    //variable
    int equationThree = 6*4/12+72/8-9;
    //print
    printf("Equation Three: %d \n", equationThree);

    //equation four: (17-6/2)+4*3 = 26
    //variable
    int equationFour = (17-6/2)+4*3;
    //print
    printf("Equation Four: %d \n", equationFour);

    //equation five: -2(1×4-2/2)+(6+2-3) = -1
    //variable
    int equationFive = -2*(1*4-2/2)+(6+2-3);
    //print
    printf("Equation Five: %d \n", equationFive);

    //equation six: -1×[(3-4×7)/5]-2×24/6 = -3
    //variable
    int equationSix = -1*((3-4*7)/5)-2*24/6;
    //print
    printf("Equation Six: %d \n", equationSix);

    //equation seven: (3*5^2/15)-(5-2^2) = 4
    //variable
    int equationSeven = (3*pow(5, 2)/15)-(5-pow(2, 2));
    //print
    printf("Equation Seven: %d \n", equationSeven);

    //equation eight: (1^4*2^2+3^3)-2^5/4 = 23
    //variable
    int equationEight = (pow(1, 4)*pow(2, 2)+pow(3, 3))-pow(2, 5)/4;
    //print
    printf("Equation Eight: %d \n", equationEight);

    //equation nine: (22/2-2*5)^2+(4-6/6)^2 = 10
    //variable
    int equationNine = pow((22/2-2*5), 2)+pow((4-6/6), 2);
    //print
    printf("Equation Nine: %d \n", equationNine);

    return 0;
}