#include <stdio.h>
#include <math.h>
//Given three integers A, B, and C, write an algorithm to determine if the equation Ax + By = C has integer solutions and, if so, find one such solution.

int GCD(int A , int B){
	while (B != 0){
		int temp = B;
		B = A % B;
		A = temp;
	}
	return A;
}

int Extended_gcd(int a, int b, int *x, int *y){
   if (b ==0){
      *x =1;
      *y =0;
      return a;
   }
   int x1,y1;
   int g = extended_gcd(b,a%b, &x1,&y1);
   *x = y1;
   *y = x1 - (a/b) *y1;
   return g;
}
