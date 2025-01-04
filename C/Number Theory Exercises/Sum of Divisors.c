#include <stdio.h>
#include <math.h>
//Write an algorithm to compute the sum of all divisors of a given number N ( 1 ≤ N ≤ 10^6).

long long sumOfDivisors(int N) {
   long long sum =0;

   for(int i =1; i < sqrt(N); i++){
      if(N % i == 0){
         sum += i;
         if(i!= N/i){
            sum += N/i;
         }
      }
   }
   return sum;
}

int main(){

   long long result = sumOfDivisors(6);
   printf("Sum of divisors of 6 is : %lld \n", result);
}
