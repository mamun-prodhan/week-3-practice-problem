#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = n-1, j = 0; i>=j; i--, j++){
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }

    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }



    return 0;
}