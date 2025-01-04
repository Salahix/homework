#include <stdio.h>

//Given three integers A, B, and M , write an algorithm to compute (AB ) mod M efficientlyfor large values of B using modular exponentiation.

long long ModularExponentiation(long long A, long long B , long long M){

   long long result = 1;
   A =A%M;

   while (B>0){
      if(B%2==1){
         result = (result * A) %M;
      }
      A = (A*A) % M;
      B = B / 2;
   }
   return result;
}

int main(){
   long long result = ModularExponentiation(3,13,7);
   printf("Result : %lld \n",result);

   return 0;
}
