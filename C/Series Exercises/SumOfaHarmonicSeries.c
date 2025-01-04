#include<stdio.h>

double SumOfHarmonic(int N){
   if (N <= 0){
      return 0;
   }
   double sum = 0;
   for (int i = 1 ; i <= N ; i++){
      sum += 1.0/i;
   }
   return sum;
}

int main () {
   int N = 5;
   double result = SumOfHarmonic(N);
   printf("The sum of the first %d terms of the harmonic series is: %.6f\n", N, result);

    return 0;
}
