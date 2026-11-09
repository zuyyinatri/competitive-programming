#include <stdio.h>
#include <stdlib.h>

long max(long a, long b){
    return a > b ? a : b;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        long n, x, y;
        scanf("%ld %ld %ld", &n, &x, &y);

        char str[n];
        scanf(" %s", str);

        long c4 = 0, c8 = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == '4')
                c4++;
            else
                c8++;
        }

        x = labs(x);
        y = labs(y);

        if(max(x, y) <= c4 + c8 && x + y <= c4 + 2*c8)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
