#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        char s[n];
        scanf(" %s", s);

        int c1 = 0, c0 = 0;
        for(int i = 0; i < n; i++){
            switch(s[i]){
                case '1' : c1++; break;
                case '0' : c0++; break;
            }
        }

        if(k < n/2){
            int pair01 = (n - 2*k) / 2;
            c0 -= pair01;
            c1 -= pair01;

            if(c0 % 2 != 0 || c1 % 2 != 0){
                printf("NO\n");
                continue;
            }

            int pair0 = 0, pair1 = 0;
            if(c0 > 0 && c0 % 2 == 0)
                pair0 = c0 / 2;
            if(c1 > 0 && c1 % 2 == 0)
                pair1 = c1 / 2;

            if(pair0 + pair1 == k)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else{
            int pair0 = c0 / 2;
            int pair1 = c1 / 2;

            if(c1 % 2 == 0 && c0 % 2 == 0 && pair1 + pair0 == k)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}
