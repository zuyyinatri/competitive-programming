#include <stdio.h>
#include <stdlib.h>

int cmpAsc(const void *a, const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;

    return x - y;
}

int cmpDesc(const void *a, const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;

    return y - x;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        int price[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &price[i]);
        qsort(price, n, sizeof(int), cmpDesc);

        int discount[k];
        for(int i = 0; i < k; i++)
            scanf("%d", &discount[i]);
        qsort(discount, k, sizeof(int), cmpAsc);

        int id = 0;
        long long sum = 0;
        for(int i = 0; i < k && id < n; i++){
            if(discount[i] == 1){
                id++;
                continue;
            }

            for(int j = 0; j < discount[i] && id < n; j++){
                if(j == discount[i] - 1){
                    id++;
                }else
                    sum += price[id++];
            }
        }
        if(id < n){
            for(int i = id; i < n; i++)
                sum += price[i];
        }

        printf("%lld\n", sum);
    }
    return 0;
}
