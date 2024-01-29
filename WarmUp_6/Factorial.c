#include <stdio.h>
//factorial function
int factorial(int n){
    //result will store answer
    int result = 0;
    if (n <= 0) {
        result = 1;
    } 
    else {
        result = n * factorial(n - 1);
    }
    return result;
}

int main(){
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    
    return 0;
}