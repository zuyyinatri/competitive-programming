#include <stdio.h>
#include <string.h>

int main (void){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        char s[101];
        scanf(" %s", s);

        if(n == 1){
            printf("NO\n");
            continue;
        }

        int sama = 1;
        for(int i = 1; i < n; i++){
            if(s[i - 1] != s[i]){
                sama = 0;
                break;
            }
        }

        char rev[n];
        int id = 0;
        for(int i = n - 1; i >= 0; i--)
            rev[id++] = s[i];
        rev[n] = '\0';

        if(strcmp(s, rev) < 0)
            printf("YES\n");
        else{
            if(k > 0 && sama == 0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
