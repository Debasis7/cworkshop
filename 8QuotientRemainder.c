#include <stdio.h>
#include <time.h>

int main() {
    int dividend, divisor, quotient, remainder;
    double time_spent=0.0;
    
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    clock_t begin=clock();
    // Computes quotient
    quotient = dividend / divisor;
   
    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    
    clock_t end=clock(); 
    
    
    time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
    printf("\n\nThe elapsed time is %f seconds\n",time_spent);
    
    return 0;
}
