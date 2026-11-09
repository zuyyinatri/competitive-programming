#include <stdio.h>

int main () {
    char username[100];
    scanf(" %s", username);

    int letter[26] = {0};
    int distinct = 0;
    for(int i = 0; username[i] != '\0'; i++){
        int id = username[i] - 'a';
        if(letter[id] != 0){
            continue;
        }
        else{
            distinct++;
            letter[id]++;
        }
    }

    if(distinct % 2 == 1)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");

    return 0;
}
