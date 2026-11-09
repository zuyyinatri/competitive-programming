#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        char s[200000];
        scanf(" %s", s);

        int count = 0;
        int open = 0, close = 0;
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == '(')
                open++;
            else
                close++;

            if(open == close)
                count++;
        }

        if(count > 1)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
