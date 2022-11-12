#include <stdio.h>
#include <time.h>

int main() {
   int i, space, rows, k = 0, count = 0, count1 = 0;
   double time_spent=0.0;
   
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   clock_t begin=clock();
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   
   clock_t end=clock();

   time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
   printf("\n\nThe elapsed time is %f seconds\n",time_spent);
   
   return 0;
}
