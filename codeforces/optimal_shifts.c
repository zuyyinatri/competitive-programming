#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void rotate(int n, char *base, int d, char out[]) {
    for (int i = 0; i < n; i++){
        out[i] = base[(i + d) % n];
        //printf("%c", out[i]);
    }
    out[n] = '\0';
}

bool all_one(int n, const char s[]) {
    for (int i = 0; i < n; i++)
        if (s[i] == '0')
            return false;
    return true;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char base[n + 1];
        scanf(" %s", base);

        char cur[n + 1];
        strcpy(cur, base);

        char tmp[n + 1];

        int coin = 0;
        int last = -1;
        int id = 0;

        while (!all_one(n, cur)) {
            id %= n;

            if (cur[id] == '0') {
                int d;
                if (last == -1)
                    last = id;
                else{
                    if (last < id)
                        d = id - last - 1;
                    else if(last == id)
                        d = id;
                    else
                        d = (n - last) + id;

                    //printf("%d\n", d);
                    rotate(n, base, d, tmp);
                    coin += d;

                    for (int i = 0; i < n; i++) {
                    if (cur[i] == '1' || tmp[i] == '1')
                        cur[i] = '1';
                    }
                }
                last = id;
            }
            id++;
        }
        //printf("%d\n", coin);
    }

    return 0;
}
