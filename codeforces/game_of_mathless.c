#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        int cnt[n + 1];
        memset(cnt, 0, sizeof(cnt));

        for(int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
            cnt[x]++;
        }

        int score = 0;
        for(int i = 1; i <= n; i++){
            int j = k - i;
            if(j < 1 || j > n)
                continue;

            if(i < j && cnt[i] > 0 && cnt[j] > 0){
                score += (cnt[i] < cnt[j] ? cnt[i] : cnt[j]);
            }
            else if(i == j && cnt[i] > 0 && cnt[j] > 0){
                score += cnt[i] / 2;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}
