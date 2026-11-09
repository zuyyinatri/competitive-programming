#include <stdio.h>
#include <stdlib.h>

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

        int odd[n], id = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            int a;
            scanf("%d", &a);

            if(a % 2 == 0)
                sum += a;
            else
                odd[id++] = a;
        }

        if(id == 0){
            printf("0\n");
            continue;
        }

        qsort(odd, id, sizeof(int), cmp);
        for(int i = id/2; i < id; i++)
            sum += odd[i];

        printf("%lld\n", sum);
    }
    return 0;
}
