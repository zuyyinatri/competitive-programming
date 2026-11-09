#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int out = 0;
    while(n--){
        int count1 = 0, count0 = 0;
        for(int i = 0; i < 3; i++){
            int app;
            scanf("%d", &app);
            if(app == 1)
                count1++;
            else
                count0++;
        }

        if(count1 > count0)
            out++;
    }

    printf("%d", out);

    return 0;
}
