#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int ans = 0;
    for(int i = n-1, j = 0; i>=j; i--, j++){
        if(a[i] == a[j]){
            ans = 1;
            // printf("a[%d] == a[%d] = %d\n", i,j, ans);
        }
        if(a[i] != a[j]){
            ans = 0;
            // printf("a[%d] != a[%d] = %d\n", i, j, ans);
            break;
        }
    }

    if(ans){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}