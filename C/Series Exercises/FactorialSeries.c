#include<stdio.h>


long long factorial(int num){
   long long fact = 1;
   for (int i = 1; i <= num; i++){
      fact *=i;
   }
   return fact;
}

long long sumFactorials(int N){
   long long sum = 0;
   for (int i = 1; i <= N; i++){
      sum += factorial(i);
   }
   return sum;
}

int main(){
   int N=4;
   long long result = sumFactorials(N);
   printf("The sum of the factorials of the first %d natural numbers is: %lld\n", N, result);

   return 0;
}
