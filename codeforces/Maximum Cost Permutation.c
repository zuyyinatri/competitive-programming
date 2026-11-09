#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int l = 0, r = 0;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] == 0 && (i == 0 || i == n - 1))
            if(arr[i + 1] != 0 && arr[i] > arr[i + 1])
                cur = i;
        }

        int ans = r - l + 1;
        printf("%d\n", ans);
    }
    return 0;
}
