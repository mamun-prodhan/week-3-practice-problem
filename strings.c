#include<stdio.h>

int main(){

    char a[15];
    char b[15];

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    int aLen = 0;
    int bLen = 0;
    for(int i = 0; a[i] != '\0'; i++){

        if(a[i] == '\n'){
            break;
        }
        aLen++;
    }
    for(int i = 0; b[i] != '\0'; i++){

        if(b[i] == '\n'){
            break;
        }
        bLen++;
    }

    printf("%d %d", aLen, bLen);
    char newChar[25];

    for(int i = 0; i<aLen; i++){
        newChar[i] = a[i];
    }
    printf("%s", newChar);


    return 0;
}