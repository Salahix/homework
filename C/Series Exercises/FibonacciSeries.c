#include <stdio.h>

long long fibonacci(int n){
   return (n <= 1) ? n: fibonacci(n-1) + fibonacci(n-2);
}

void printf_fibonacci_series(int N){
   for(int i = 0 ; i < N ; i++ ){
      printf("%lld ",fibonacci(i));
   }
   printf("\n");
}


int main(){
   int N = 7;

   printf_fibonacci_series(N);

   return 0;
}
