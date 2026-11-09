#include <stdio.h>

int main () {
    int g, c, l;
    scanf("%d %d %d", &c, &g, &l);
    int tot = c + g + l;

    int min = c;
    if(min > g)
        min = g;
    if(min > l)
        min = l;

    int max = c;
    if(max < g)
        max = g;
    if(max < l)
        max = l;

    if(max - min >= 10)
        printf("check again");
    else
        printf("final %d", tot - (min + max));

    return 0;
}
