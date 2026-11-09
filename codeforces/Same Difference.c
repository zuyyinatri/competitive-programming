#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        char x = s[n-1];
        int count = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] != x)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
