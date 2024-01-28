#include <stdio.h>
int main() {
    //variables:
    int num1, num2, sum, difference, product, quotient; 
    
    //input first number 
    printf("Enter first number: ");
    scanf("%d", &num1);

    //input second number 
    printf("Enter second number: ");
    scanf("%d", &num2);

    //Addition 
    sum = num1 + num2;
    printf(" Sum: %d", sum);
    
    //Subtraction
    difference = num1 - num2;
    printf(" Difference: %d", difference);
    
    //Multiplication
    product= num1*num2;
    printf(" Product: %d", product);

    //Divison
    quotient = num1/num2;
    printf(" Quotient: %d", quotient);

    return 0;
}