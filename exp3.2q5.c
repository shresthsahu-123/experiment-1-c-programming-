#include <stdio.h>

int main() {
    int limit = 20;
    printf("Ramanujan numbers up to limit %d:\n", limit);

    for (int a = 1; a <= limit; a++) {
        for (int b = a; b <= limit; b++) {
            for (int c = a + 1; c <= limit; c++) {
                for (int d = c; d <= limit; d++) {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;

                    if (sum1 == sum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}