#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int ok = 1;
        for(int i = 0; i < n - 2; i++){
            if(a[i] % 2 != a[i+2] % 2){
                printf("NO\n");
                ok = 0;
                break;
            }
        }

        if(ok)
            printf("YES\n");
    }
    return 0;
}
