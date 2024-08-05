#include <stdio.h>


double power(double a, int n) {
    
    if (n == 0) {
        return 1;
    }
  
    if (n < 0) {
        return 1 / power(a, -n);
    }
   
    return a * power(a, n - 1);
}

int main() {
    double a;
    int n;

  
    printf("Enter the base (a): ");
    scanf("%lf", &a);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

 
    double result = power(a, n);
    
   
    printf("%.2lf^%d = %.2lf\n", a, n, result);

    return 0;
}

