#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void shift(int n, char s[], int d){
    char temp[n + 1];
    for(int i = 0; i < n; i++)
        temp[i] = s[(i + d) % n];

    temp[n] = '\0';
    strcpy(s, temp);
}

bool allOne(char curr[], int n){
    for(int i = 0; i < n; i++){
        if(curr[i] == '0')
            return false;
    }
    return true;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        char s[400005];
        scanf(" %s", s);

        for(int i = 0; i < n; i++){
            s[n + i] = s[i];
        }
        s[2*n] = '\0';

        int cur = 0, res = 0;
        for(int i = 0; i < 2*n; i++){
            if(s[i] == '1')
                cur = 0;
            else
                cur++;

            if(cur > res)
                res = cur;
        }
        printf("%d\n", res);
    }
    return 0;
}
