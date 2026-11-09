#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        int minVal = 1;
        int notMin = n/k + 1;
        for(int i = 1; i <= n; i++){
            if(i % k == 0){
                printf("%d ", minVal++);
            }
            else
                printf("%d ", notMin++);
        }
        printf("\n");
    }
    return 0;
}
