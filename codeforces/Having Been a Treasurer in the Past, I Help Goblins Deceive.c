#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        char s[n];
        scanf(" %s", s);

        int dash = 0, us = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '-')
                dash++;
            else
                us++;
        }

        long long ans = (long long)us * (dash/2) *(dash - dash/2);
        printf("%lld\n", ans);
    }

    return 0;
}

//250049989998000
