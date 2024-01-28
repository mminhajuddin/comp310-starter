#include <stdio.h>
#include <string.h>
int main() {
    //string/character array intializing
    char word[] = "Hello";
    
    // String length 
    int length = strlen(word);

    //reversing charcter array 
    for (int i = 0, j = length - 1; i < j; i++, j--) { //using length variable bc you can't do word.length 
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    printf("%s\n", word);
    
    return 0;
}