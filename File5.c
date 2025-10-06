#include <stdio.h>
#define _USE_MATH_DEFINES
#define e 2,71828
#define t 0,5
#include <locale.h>
#include <math.h>

double F(double x, double y) {
    return (pow(sin(x), 3) + log(pow(2*y + 3*x, e))) / (pow(t, e) + sqrt(x));
}
int main() {
    double result1 = F(2, 1.5 * pow(10, -6));
    double result2 = F(4, 2);

    printf("F( - 10^-5) = %.6f\n", result1);
    printf("F(4, 2) = %.6f\n", result2);

    return 0;


}