#include <stdio.h>
int linearSearch (int arr[], int length, int target){
    //needs to use size variable because arr.length doesn't work 
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(){
    //must do int array[] instead of int [] array 
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    //sizeof function finds the length of array 
    int length = sizeof(array);
    //updating linearSearch to match added parameter
    int index = linearSearch(array, length, target);
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}