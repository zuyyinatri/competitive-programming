#include <stdio.h>
#include <stdlib.h>

#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a > b) ? a : b)

int cmp(const void *a, const void *b){
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

        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int x;
        scanf("%d", &x);

        qsort(a, n, sizeof(int), cmp);

        if(x >= a[0] && x <= a[n-1])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
