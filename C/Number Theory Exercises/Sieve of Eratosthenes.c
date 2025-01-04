#include<stdio.h>
#include<stdbool.h>
//Write an algorithm to generate all prime numbers less than or equal to a given number N ( 1 ≤ N ≤ 10^6 ) using the Sieve of Eratosthenes.

void SieveOfEratosthenes(int N){
   bool is_prime[N+1];

   for(int i = 0 ; i<= N; i++){
      is_prime[i] = true;
   }


   is_prime[0] = is_prime[1] = false;

   for(int p = 2; p*p <= N ; p++) {
      if(is_prime[p]){
         for(int i=p*p ; i <= N; i += p){
            is_prime[i]=false;
         }
      }
   }
   printf("Prime numbers up to %d are:\n",N);
   for(int i =2;i <=N ; i++){
      if (is_prime[i]){
         printf("%d ",i);
      }
   }
   printf("\n");
}

int main(){
   SieveOfEratosthenes(19);
   return 0;
}
