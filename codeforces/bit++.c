#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int val = 0;
    while(n--){
        char in[4];
        scanf(" %s", in);

        if((in[0] == '+' && in[1] == '+') || (in[1] == '+' && in[2] == '+'))
            val++;
        else if((in[0] == '-' && in[1] == '-') || (in[1] == '-' && in[2] == '-'))
            val--;
    }

    printf("%d", val);
    return 0;
}
