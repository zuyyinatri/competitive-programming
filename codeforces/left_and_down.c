#include <stdio.h>

#define max(a,b) ((a) > (b) ? (a) : (b))

long long gcd(long long a, long long b){
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);

        long long g = gcd(a, b);

        if(a / g <= k && b / g <= k)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
