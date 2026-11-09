#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int l, a, b;
        scanf("%d %d %d", &l, &a, &b);

        int vis[5005] = {0}, n = 1, max = 0;
        while(1){
            int temp = (a + n*b) % l;
            if(vis[temp])
                break;
            else
                vis[temp] = 1;

            if(temp > max)
                max = temp;

            n++;
        }

        printf("%d\n", max);
    }
    return 0;
}
