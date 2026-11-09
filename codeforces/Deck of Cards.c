#include <stdio.h>
#include <string.h>

int main (){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        char s[200005];
        scanf("%d %d %s", &n, &k, s);

        int a = 0, b = 0, c = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == '0')
                a++;
            if(s[i] == '1')
                b++;
            if(s[i] == '2')
                c++;
        }

        char ans[n + 1];
        memset(ans, '+', sizeof(ans));

        for(int i = 0; i < n; i++){
            if(i < a + c || i >= n - b - c)
                ans[i] = '?';
            if(i < a || i >= n - b || k == n)
                ans[i] = '-';
        }
        ans[n] = '\0';

        printf("%s\n", ans);
    }
    return 0;
}
