#include <stdio.h>
#include <math.h>

int main () {
    int mat[5][5];
    int r = 0, c = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }

    int moves = fabs(r - 2) + fabs(c - 2);
    printf("%d", moves);

    return 0;
}
