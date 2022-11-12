#include<stdio.h>
#include <time.h>

int main() {
  double time_spent=0.0;
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);
  
  clock_t begin=clock();
  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;
  clock_t end=clock();
  time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  
  
  printf("\n\nThe elapsed time is %f seconds\n",time_spent);
  
  return 0;
}
