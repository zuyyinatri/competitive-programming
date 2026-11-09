#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        int seen[k];
        memset(seen, 0, k * sizeof(int));

        int count = 0;
        for(int i = 0; i < n; i++){
            int a;
            scanf("%d", &a);

            if(a < k)
                seen[a] = 1;
            if(a == k)
                count++;
        }

        int found = 0;
        for(int i = 0; i < k; i++){
            if(seen[i])
                found++;
        }

        int missing = k - found;
        int ans = missing > count ? missing : count;
        printf("%d\n", ans);
        //printf("%d %d %d", found, missing, count);
    }

    return 0;
}
