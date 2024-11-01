#include <stdio.h>

// Given two integers A and B write algorithm to compute their greatest common divisor using the Euclidean algorithm 
int GCD(int A , int B){
	while (B != 0){
		int temp = B;
		B = A % B;
		A = temp;
	}
	return A;
}

int main (){
	int a = 357;
	int b = 128;
	
	printf ("gcd (%d , %d) = %d \n ",a,b,GCD(a,b));
	
	return 0;
}
