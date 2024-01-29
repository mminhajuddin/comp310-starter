#include <stdio.h>
// argc stores number of arguments passed including the program name
// argv is an array of character pointers listing the arguments
int main(int argc, char *argv[]) { 
    //looping through arguments  
    for (int i = 1; i < argc; i++) {
        printf("%s", argv[i]);
    }

    return 0;
}