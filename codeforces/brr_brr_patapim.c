#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int grid[n][n];
        int arr[2*n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &grid[i][j]);

                arr[i+j+1] = grid[i][j];
            }
        }

        int num[2*n + 1];
        memset(num, 0, sizeof(num));
        for(int i = 1; i < 2*n; i++){
            int x = arr[i];
            num[x] ++;
        }

        for(int i = 1; i < 2*n + 1; i++){
            if(num[i] == 0)
                arr[0] = i;
        }

        for(int i = 0; i < 2*n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}
