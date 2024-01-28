#include <stdio.h>
int main() {

//intializing array and sum and average 
int size = 5;
int arr[5] = {1, 2, 3, 4, 5};
int sum=0; 
int average; 

//Sum Calculation
for (int i=0; i<size; i++) {
    sum = sum + arr[i];
}

//Average calculation 
average = sum/size;

//Printing Calculations
printf("Sum: %d\n", sum);
printf("Average: %d\n", average);

return 0;

}