#include <stdio.h>

int main () {
    int m, n;
    scanf("%d %d", &m, &n);

    int dominoes = (m * n) / 2;
    printf("%d", dominoes);

    return 0;
}
