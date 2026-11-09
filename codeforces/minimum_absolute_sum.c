#include <Stdio.h>
#include <math.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

       if(a[0] == -1 && a[n - 1] == -1){
            a[0] = 0;
            a[n - 1] = 0;
       }
       else if(a[0] == -1)
            a[0] = a[n - 1];
       else if(a[n - 1] == -1)
            a[n - 1] = a[0];

       for(int i = 1; i < n - 1; i++){
            if(a[i] == -1)
                a[i] = 0;
       }

       int ans = abs(a[n - 1] - a[0]);

        printf("%d\n", ans);
        for(int i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}
