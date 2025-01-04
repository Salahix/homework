#include <stdio.h>

int teruangular_number(int n){
   return (n *(n+1))/2;
}

int main(){
   int n= 5;

   int result = teruangular_number(n);
   printf("The %d-th triangular number is: %d\n", n,result);

   return 0;
}
