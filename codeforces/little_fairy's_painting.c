#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;

    return x - y;
}

int main (void){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int c[1005] = {0}, a[n], count = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);

            if(c[a[i]] == 0){
                count++;
                c[a[i]] = 1;
            }
        }

        qsort(a, n, sizeof(int), cmp);

        for(int i = 0; i < n; i++){
            if(a[i] >= count){
                printf("%d\n", a[i]);
                break;
            }
        }
    }
    return 0;
}
