#include <stdio.h>
#include <string.h>

int main (void) {
    int t;
    scanf("%d", &t);

    while(t--){
        char n[105];
        scanf(" %s", n);

        int len = strlen(n);

        int count = 0, firstId = len;
        for(int i = len - 1; i >= 0; i--){
            if(n[i] == '0'){
                count++;
                firstId = i;
            }
            else
                break;
        }

        for(int i = 0; i < firstId; i++){
            if(n[i] != '0')
                count++;
        }

        printf("%d\n", count - 1);
    }
    return 0;
}
