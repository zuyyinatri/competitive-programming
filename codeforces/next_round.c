#include <stdio.h>

int main () {
    int n, k;
    scanf("%d %d", &n, &k);

    int score[n];
    int min = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
        if(i == k - 1)
            min = score[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(score[i] >= min && score[i] > 0)
            count++;
    }

    printf("%d", count);

    return 0;
}
