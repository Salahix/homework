#include <stdio.h>
#include <math.h>

double geometric_sum(double a,double r,int N){
  return (r == 1) ?  N *a : a * (1-pow(r,N))/(1-r);

}
int main(){
    double a = 3, r =2;
    int N = 5;
  double result = geometric_sum(a, r, N);
    printf("The sum of the first %d terms of the geometric series is: %.2f\n", N, result);

    return 0;
}
