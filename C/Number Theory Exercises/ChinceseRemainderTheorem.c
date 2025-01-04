#include <stdio.h>
//Write a function that solves a system of simultaneous congruences. Given several pairs of integers (n1 , r1 ), (n2 , r2 ), . . . , (nk , rk ), find the smallest integer X
int modular_inverse(int a, int m){
   int m0 = m, x0 = 0 , x1 = 1;
   if (m == 1) return 0;

   while (a > 1) {
      int q = a / m;
      int temp = m;

      m = a % m ;
      a = temp;
      temp = x0;
      x0 = x1 - q * x0;
      x1 = temp;
   }
   return (x1 < 0 ) ? x1 +m0 :  x1;
}

int solve_congruences(int n[], int r[], int k){
   int N = 1;

   for (int i = 0; i < k; i++){
      N *= n[i];
  }
   int X = 0;

   for (int i = 0 ; i < k ; i++){
      int N_i = N / n[i];
      int y_i = modular_inverse(N_i,n[i]);
      X +=  r[i] * N_i * y_i;
  }

  return X % N;
}

int main() {

    int n[] = {3, 5, 7};
    int r[] = {2, 3, 2};
    int k = sizeof(n) / sizeof(n[0]);

    int result = solve_congruences(n, r, k);
    printf("The smallest X is: %d\n", result);

    return 0;
}
