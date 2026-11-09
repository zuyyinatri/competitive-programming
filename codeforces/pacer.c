#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);

        int mod = 0;
        int point = m;
        for(int i = 0; i < n; i++){
            int a, b;
            scanf("%d %d", &a, &b);

            int sum = a + b;
            int current_mod = (a + b) % 2;
            if(mod != current_mod)
                point--;

            mod = current_mod;
        }

        printf("%d\n", point);
    }

    return 0;
}
