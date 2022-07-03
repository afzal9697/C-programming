#include <stdio.h>
int main() {
   int rows, coef =1, space, i, j;  //declaring variables
   printf("Enter the number of rows: ");
   scanf("%d", &rows);  //taking no of rows as input
   for (i = 0; i < rows; i++) {
      for (space =1; space <=rows - i; space++)
         printf("  ");  //space printing
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0) //conditions for 1st and last elements in row
            coef = 1;
         else
            coef = coef * (i - j + 1) / j; //calculating other coefficients
         printf("%4d", coef);  //printing pascal triangle
      }
      printf("\n");
   }
   return 0;
}