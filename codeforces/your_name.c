#include <stdio.h>

int main () {
    int q;
    scanf("%d", &q);

    while(q--){
        int n;
        scanf("%d", &n);

        char s[n], t[n];
        scanf(" %s %s", s, t);

        int letter[26] = {0};
        for(int i = 0; i < n; i++){
            int idS = s[i] - 'a';
            int idT = t[i] - 'a';

            letter[idS]++;
            letter[idT]--;
        }

        int bisa = 1;
        for(int i = 0; i < 26; i++){
            if(letter[i] != 0){
                bisa = 0;
                break;
            }
        }

        if(bisa)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
