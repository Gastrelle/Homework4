#include <stdio.h>
#define _USE_MATH_DEFINES
#define e 2.71828
#define t 0.5
#include <locale.h>
#include <math.h>


double F(double x, double y) {
    return (pow(sin(x), 3) + log(2 * y + 3 * x)) / (pow(t, e) + sqrt(x));
}
int main() {
    double x, y;

    printf("Puts x:\n");
    scanf_s("%lf", &x);

    printf("Puts y:\n");
    scanf_s("%lf", &y);

    double result1 = F(x, y);

    printf("%.6f\n", result1);
    return 0;
}
