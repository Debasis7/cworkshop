#include <stdio.h>
#include <time.h>

int main() {
  double time_spent=0.0;
  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);
  clock_t begin=clock();
  
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
  clock_t end=clock();
  
  time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
  printf("\n\nThe elapsed time is %f seconds\n",time_spent);
  
  return 0;
}
