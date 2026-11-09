#include <stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int min(int a, int b){
    return a < b ? a : b;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int r, x, d, n;
        char s[1005];
        scanf("%d %d %d %d %s", &r, &x, &d, &n, s);

        int low = r, high = r, ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                low -= d;
                high += d;
                ans++;
            }
            else{
                if(low >= x)
                    continue;
                else if(high < x){
                    low = max(0, low -= d);
                    high = min(high += d, x-1);
                    ans++;
                }
                else{
                    low = max(0, low -= d);
                    high = x-1;
                    ans++;
                }
            }
        }

        printf("%d\n", ans);
    }
    return 0;
}
