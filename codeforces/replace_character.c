#include <stdio.h>

int findMin(int n, int letter[]){
    int id = -1;
    for(int i = 0; i < n; i++){
        if(letter[i] > 0 && (id == -1 || letter[i] < letter[id]))
            id = i;
    }
    return id;
}

int findMax(int n, int letter[]){
    int id = n-1;
    for(int i = n-2; i >= 0; i--){
        if(letter[i] > letter[id])
            id = i;
    }
    return id;
}

int main (void){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        char s[11];
        scanf(" %s", s);

        int letter[26] = {0};
        for(int i = 0; i < n; i++){
            int j = s[i] - 'a';

            letter[j]++;
        }

        int max = findMax(26, letter);
        int min = findMin(26, letter);

        for(int i = 0; i < n; i++){
            if(s[i] - 'a' == min){
                s[i] = (char)(max + 'a');
                break;
            }
        }

        printf("%s\n", s);
    }
    return 0;
}
