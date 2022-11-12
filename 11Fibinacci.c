#include <stdio.h>
#include <time.h>

int main() {

  int i, n;
  double time_spent=0.0;
  
  clock_t begin=clock();

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  
  clock_t end=clock();

  time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
  printf("\n\nThe elapsed time is %f seconds\n",time_spent);

  return 0;
}
