#include<stdio.h>
#include <time.h>

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    double time_spent=0.0;

    clock_t begin=clock();
    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    clock_t end=clock();

    time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
    printf("\n\nThe elapsed time is %f seconds\n",time_spent);
    
    return 0;
}

