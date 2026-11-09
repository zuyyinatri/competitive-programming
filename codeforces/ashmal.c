#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        char s[n][4005];
        for(int i = 0; i < n; i++){
            scanf(" %s", s[i]);
        }

        if(n == 1){
            printf("%s\n", s[0]);
            continue;
        }

        char ans[4000*n + 5];
        strcpy(ans, s[0]);
        for(int i = 1; i < n; i++){
            char t1[4000*n + 5];
            strcpy(t1, ans);
            strcat(t1, s[i]);

            char t2[4000*n + 5];
            strcpy(t2, ans);
            strcat(s[i], t2);
            strcpy(t2, s[i]);

            if(strcmp(t1, t2) < 0)
                strcpy(ans, t1);
            else
                strcpy(ans, t2);

            if(i == n - 1)
                printf("%s", ans);
        }
        printf("\n");
    }
    return 0;
}
