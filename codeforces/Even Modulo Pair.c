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

        int found = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if((arr[j] % arr[i]) % 2 == 0){
                    printf("%d %d\n", arr[i], arr[j]);
                    found = 1;
                    break;
                }
            }
            if(found)
                break;
        }
        if(!found)
            printf("-1\n");

    }
    return 0;
}
