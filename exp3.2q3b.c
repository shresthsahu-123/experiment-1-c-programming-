#include <stdio.h>

int main() {
    int n = 5, coef;

    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%d ", coef);
        }
        printf("\n");
    }

    return 0;
}
