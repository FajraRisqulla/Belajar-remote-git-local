#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

   system("clear");
   double number, squareRoot;

   printf("Enter a number: ");
   scanf("%lf", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, squareRoot);

   return 0;
}