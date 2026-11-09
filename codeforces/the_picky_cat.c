#include <stdio.h>
#include <math.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n];
        int cnt = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            arr[i] = abs(arr[i]);

            if(i > 0 && arr[i] < arr[0])
                cnt++;
        }

        int x = ceil(n / 2);

        if(cnt > x)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
