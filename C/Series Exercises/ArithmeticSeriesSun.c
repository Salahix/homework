#include <stdio.h>

double arithmetic_sum(int a , int d, int N) {

   double sum = (N/ 2.0) * (2 * a + (N-1)*d);
   return sum ;
}

int main() {
   int a = 3 , d = 2, N = 5;

    double result = arithmetic_sum(a, d, N);
    printf("The sum of the first %d terms of the arithmetic series is: %.2f\n", N, result);
    return
}
