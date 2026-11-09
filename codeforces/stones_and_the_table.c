#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    char color[51];
    scanf("%s", color);

    int count = 0;
    for(int i = 0; color[i]  != '\0'; i++){
        if(color[i] == color[i + 1])
            count++;
    }

    printf("%d", count);

    return 0;
}
