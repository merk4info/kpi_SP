#include <math.h>
#include <stdio.h>

int main () {
    int degree_mul;

    printf("Type a coefficient (degree = 30 * x) x:\n");
    scanf_s("%d", &degree_mul);

    double a = degree_mul * 0.523599;
    double u1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * (pow(sin(a), 2)));
    double u2 = 2 * sin(a);

    printf("u1 = %f\n", u1);
    printf("u2 = %f\n", u2);
}
