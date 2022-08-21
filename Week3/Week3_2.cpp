#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 == 0){
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n-1;j++){
                if((j == n/2 - 1 && (i == 0 || i == n-1)) || (j == n / 2 + i -1 && i < n/2) || (j == n - 2 - (i - n/2) && i >= n/2) || (j == i - n/2 && i >= n/2) || (j == n/2 - i - 1 && i < n/2)){
                    printf("*");
                }
                else printf("-");
            }
            printf("\n");
        }
    }
    else{
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if((j == n/2  && (i == 0 || i == n-1)) || (j == n/2 + i && (i <= n/2)) || (j == n - 1 - (i - n/2) && i > n/2) || (j == i - n/2 && i > n/2) || (j == n/2 - i && i <= n/2)){
                    printf("*");
                }
                else printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}