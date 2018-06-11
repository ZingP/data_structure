#include <stdio.h>
#include <math.h>
//迭代法求开方
float _sqrt(float a) {
    float x_n = a;
    float x_n1 = a /2;

    while (fabs(x_n-x_n1) > 1e-5) {
        x_n = x_n1;
        x_n1 = (x_n + a/x_n) / 2;
    }
    return x_n;
}

int main() {
    float a, b;
    printf("Please input a digist:");
    scanf("%f", &a);

    if (a <= 0) {
        printf("The input can not be a negative or zero..\n");
        printf("Please input a positive digist:\n");
        scanf("%f", &a);
    }
    printf("result is %f\n", _sqrt(a));
    scanf("%f", &b);

    return 0;
}