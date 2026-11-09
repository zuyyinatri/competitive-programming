#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void  *b){
    int x = *(const int *)a;
    int y = *(const int *)b;

    return x - y;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int a[n + 1];
        for(int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        a[0] = 0;

        qsort(a, n + 1, sizeof(int), cmp);

        int win = 1;
        for(int i = 3; i <= n; i += 2){
            if(a[i-1] != a[i]){
                //printf("%d %d", a[i-1], a[i]);
                printf("NO\n");
                win = 0;
                break;
            }
        }

        if(win)
            printf("YES\n");
    }
    return 0;
}
