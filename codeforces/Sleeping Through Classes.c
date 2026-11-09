#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        char s[n+1];
        scanf("%s", s);

        int mark[n];
        memset(mark, 0, sizeof(mark));

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                mark[i] = 1;
                for(int j = i+1; j <= i+k && j < n; j++)
                    mark[j] = 1;
            }
        }

        int count = 0;
        for(int i = 0; i < n; i++){
            if(mark[i] == 0)
                count++;
        }

        printf("%d\n", count);
    }
    return 0;
}
