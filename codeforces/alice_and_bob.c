#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, a;
        scanf("%d %d", &n, &a);

        int l = 0, r = 0;
        for(int i = 0; i < n; i++){
            int marble;
            scanf("%d", &marble);

            if(a < marble)
                r++;
            else if(a > marble)
                l++;
        }

        printf("%d\n", l > r ? a - 1 : a + 1);
    }

    return 0;
}

