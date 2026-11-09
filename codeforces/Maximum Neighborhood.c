#include <stdio.h>
#include <stdbool.h>

bool isValid(int i, int j, int n){
    if((i >= n || i < 0 || j >= n || j < 0))
        return false;
    return true;
}

int main (void){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int max = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int sum = i*n + j + 1;

                if(isValid(i-1, j, n))
                    sum += (i-1)*n + j + 1;
                if(isValid(i, j-1, n))
                    sum += i*n + (j-1) + 1;
                if(isValid(i+1, j, n))
                    sum += (i+1)*n + j + 1;
                if(isValid(i, j+1, n))
                    sum += i*n + (j+1) + 1;

                if(sum > max)
                    max = sum;
            }
        }

        printf("%d\n", max);
    }
    return 0;
}
