#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
            char str[100];

    scanf("%s", str);

    int len = 0;
    for(int i = 0; str[i] != '\0'; i++ ){
        len+=1;
    }
    if(len<=10){
        printf("%s", str);
    }
    else{
        printf("%c",str[0]);
        printf("%d", (len-2));
        printf("%c", str[len-1]);
    }
    printf("\n");
    }







    return 0;
}