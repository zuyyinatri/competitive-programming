#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);

        for(int i = 0; i < n; i++){
            if(i != x)
                printf("%d ", i);
        }

        if(x < n)
            printf("%d\n", x);
        else
            printf("\n");
    }
    return 0;
}
