#include <stdio.h>

int sumOfSquares(int N){
   int sum = 0 ;
   for (int i =1; i<=N; i++){
      sum += i * i;
   }
   return sum;
}

int main(){
   int N =100;
   int result = sumOfSquares(N);
   printf("The sum of the squares of the first %d natural numbers is: %d\n", N, result);

   return 0;
}
