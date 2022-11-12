#include <stdio.h>
#include <time.h>

int main() {
  int n, reversed = 0, remainder, original;
   double time_spent=0.0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    
    clock_t begin=clock();
    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    clock_t end=clock();
    
    time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
    printf("\n\nThe elapsed time is %f seconds\n",time_spent);

    return 0;
}
