#include <stdio.h>
#include <math.h>

int rec(int a, char s[], int n, int pos){
    int time = 0;
    while(a != 0){
        pos = pos % n;

        if(s[pos] == 'A')
            a -= 1;
        else
            a = a / 2;

        time++;
        pos++;
    }
    return time;
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n, q;
        scanf("%d %d", &n, &q);

        char s[n + 1];
        scanf(" %s", s);

        int arr[q], a = 0, b = 0;
        for(int i = 0; i < q; i++){
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < n; i++){
            if(s[i] == 'A')a++;
            else b++;
        }

        for(int i = 0; i < q; i++){
            if(b == 0)
                printf("%d\n", arr[i]);
            else{
                int time = rec(arr[i], s, n, 0);
                printf("%d\n", time);
            }
        }
    }
    return 0;
}
