#include <stdio.h>
// Write a function that calculates the least common multiple of two integers A and B (1 ≤ A, B ≤ 109 ). Use the relationship between LCM and GCD to optimize your solution.
int GCD(int A , int B){
	while (B != 0){
		int temp = B;
		B = A % B;
		A = temp;
	}
	return A;
}

int LCM (int A,int B ){
   return (A * B ) / GCD(A,B) ;
}

int main () {
   int a = 12;
   int b = 18;
   
   printf("LCM(%d,%d)=%d \n",a,b,LCM(a,b));

   return 0 ;
}
