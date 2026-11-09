#include <stdio.h>
#include <math.h>

int min(int a, int b){
    return a < b ? a : b;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);

        printf(((long long)n*b <= a || b >= a) ? "1\n" : "2\n");
    }

    return 0;
}
