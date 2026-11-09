#include <stdio.h>

long long gcd(long long a, long long b){
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        long long g = 0;
        for(int i = 0; i < n; i++){
            long long a;
            scanf("%lld", &a);
            g = gcd(g, a);
        }

        long long x = 2;
        while(gcd(g, x) != 1){
            x++;
        }

        printf("%lld\n", x);
    }
    return 0;
}
