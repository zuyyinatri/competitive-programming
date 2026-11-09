#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        char s[n + 1];
        scanf(" %s", s);

        int remove[n + 1], id = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0')
                remove[id++] = i + 1;
        }

        printf("%d\n", id);
        for(int i = 0; i < id; i++)
            printf("%d ", remove[i]);
        printf("\n");
    }
    return 0;
}
