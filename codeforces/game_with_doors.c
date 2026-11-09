#include <stdio.h>

#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int l, r, L, R;
        scanf("%d %d %d %d", &l, &r, &L, &R);

        int inter = min(r, R) - max(l, L) + 1;
        int ans = inter - 1;
        if(inter <= 0)
            ans = 1;
        else{
            l != L ? ans++ : ans;
            r != R ? ans++ : ans;
        }

        printf("%d\n", ans);
    }

    return 0;
}
