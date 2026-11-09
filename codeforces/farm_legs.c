#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        if(n % 2 != 0){
            printf("0\n");
            continue;
        }

        int count = 1;
        while(n - 4 >= 0){
            n -= 4;
            count++;
        }

        printf("%d\n", count);

    }

    return 0;
}
