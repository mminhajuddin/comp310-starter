#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";

    // Writing data to the file
    file = fopen(filename, "w");
    fprintf(file, "Hello, World!\n");
    fclose(file);
    
    // Reading data from the file
    file = fopen(filename, "r");

     char line[15];  // Hello, World! is less than 15 characters
     while (fgets(line, sizeof(line), file)) {
         printf("%s", line);
     }
    fclose(file);

    return 0;
}
