#include <stdio.h>
#include <time.h>

int main() {
    int num, originalNum, remainder, result = 0;
    double time_spent=0.0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    
    clock_t begin=clock(); 
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
        
    clock_t end=clock();
    
    time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
    printf("\n\nThe elapsed time is %f seconds\n",time_spent);

    return 0;
}
