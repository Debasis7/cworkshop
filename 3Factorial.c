#include <stdio.h>
#include <time.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    double time_spent=0.0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    clock_t begin=clock();
    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
    clock_t end=clock();
  
    time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
    printf("\n\nThe elapsed time is %f seconds\n",time_spent);
    
    return 0;
}
