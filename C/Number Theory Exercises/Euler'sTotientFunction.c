#include <stdio.h>
//Given an integer N , write an algorithm to compute the number of integers from 1 to N that are coprime with N (i.e., their GCD with N is 1). This is also known as Euler’s Totient Function φ(N ).
int elulerTotient(int n){
   int phi = n;
   int p;

   for (p = 2; p*p <= n; p++){
      if(n % p == 0){
         while(n % p ==0){
            n /= p;
         }
         phi -= phi / p;
      }
   }
   if (n > 1){
        phi -= phi /n;
   }

   return phi ;
}

int main() {
   int n = 30;
   printf("Euler's Totient Function is %d = % d\n", n,elulerTotient(n));

   return 0;
}
