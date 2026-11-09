#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char a[101], b[101];
    scanf(" %s %s", a, b);

    for(int i = 0; a[i] != '\0'; i++){
        a[i] = tolower((unsigned char)a[i]);
        b[i] = tolower((unsigned char)b[i]);
    }

    if(strcmp(a, b) < 0)
        printf("-1");
    else if(strcmp(a, b) == 0)
        printf("0");
    else
        printf("1");

    return 0;
}
