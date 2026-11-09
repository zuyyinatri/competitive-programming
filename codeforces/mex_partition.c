#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;

    return  x - y;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int a[n], min = 100;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);

            if(a[i] < min)
                min = a[i];
        }

        if(min != 0){
            printf("0\n");
            continue;
        }

        qsort(a, n, sizeof(int), cmp);

        int missing = 0, mex = 0;
        for(int i = 0; i < n; i++){
            if(a[i+1] == a[i])
                continue;
            else if (a[i+1] != a[i] + 1){
                mex = a[i] + 1;
                missing = 1;
                break;
            }
        }

        if(!missing)
            mex = a[n-1] + 1;

        printf("%d\n", mex);
    }
    return 0;
}
