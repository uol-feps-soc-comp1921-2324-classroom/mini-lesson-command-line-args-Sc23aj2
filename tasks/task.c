#include <stdio.h>
#include <stdlib.h>

/**
 *Prints out sum of two numbers
 *argv[1] = num1
 *argv[2] = num2
 */


int main(int argc, char *argv[]) {

    if (argc != 3){
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    // Converting the strings into numbers
     int num1 = atoi(argv[1]);
     int num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
