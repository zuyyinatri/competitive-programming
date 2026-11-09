#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int a[n], binary[n], prefMin[n], sufMax[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            binary[i] = 1;
        }

        /*
        ide:
        semua elemen lebih kecil dari a[i] ada di kanan
        atau
        semua elemen lebih besar dari a[i] ada di kiri
        */

        prefMin[0] = a[0];
        for(int i = 1; i < n; i++)
            prefMin[i] = prefMin[i-1] < a[i] ? prefMin[i-1] : a[i];

        sufMax[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--)
            sufMax[i] = sufMax[i+1] > a[i] ? sufMax[i+1] : a[i];

        for(int i = 0; i < n; i++){
            int left = 1, right = 1;

            if(i > 0 && prefMin[i-1] < a[i])
                left = 0;
            if(i < n-1 && sufMax[i+1] > a[i])
                right = 0;

            if(!(right || left))
                binary[i] = 0;
        }

        for(int i = 0; i < n; i++)
            printf("%d", binary[i]);
        printf("\n");
    }
    return 0;
}
