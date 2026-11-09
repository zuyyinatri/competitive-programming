#include <stdio.h>
#include <ctype.h>

int main () {
    char str[1001];
    scanf(" %s", str);

    str[0] = toupper((unsigned char)str[0]);

    printf("%s", str);

    return 0;
}
