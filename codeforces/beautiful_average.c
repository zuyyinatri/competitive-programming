#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int max = 0;
        for(int i = 0; i < n; i++){
            int a;
            scanf("%d", &a);

            if(a > max)
                max = a;
        }

        printf("%d\n", max);
    }
    return 0;
}
