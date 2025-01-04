#include <stdio.h>
//Write a function that takes three integers A, B, and P (where P is a prime) and computes(AB ) mod P using Fermat’s Little Theorem for efficient computation.
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

long long FermatModExp(long long A,long long B, long long P){

   B = B % (P -1);
   return ModularExponentiation(A,B,P);
}

int main(){
   long long Result = FermatModExp(5,1000,13);
   printf("Result of (A^B) mod P = %lld \n",Result);

   return 0;
}
