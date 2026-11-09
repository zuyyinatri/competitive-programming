#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n], del[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            del[i] = 1;
        }

        int op = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(del[j] && arr[i] > arr[j]){
                    del[j] = 0;
                    op++;
                }
            }
        }

        printf("%d\n", op);
    }
    return 0;
}
