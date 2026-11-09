#include <stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int a[n], maxi = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);

            if(a[i] > maxi)
                maxi = a[i];

            if(i % 2 == 1 && a[i] < maxi)
                a[i] = maxi;
        }

        int count = 0;
        for(int i = 0; i < n; i += 2){
            if(a[i] >= a[i+1] || a[i] >= a[i-1]){
                int x = 0, x1 = 0, x2 = 0;
                if(i-1 > 0)
                    x1 = a[i] - a[i-1] + 1;
                if(i+1 < n)
                    x2 = a[i] - a[i+1] + 1;

                x = max(x1, x2);
                count += x;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
