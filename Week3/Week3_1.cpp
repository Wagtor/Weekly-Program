#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 == 0){
        int a = n/2 - 1,b = n/2 - 1;
        for(int i = 0;i < n ;i++){
            for(int j = 0;j < n - 1;j++){
                if(j == a || j == b){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            if(i < n/2 - 1 ){
                a--;
                b++;
            }
            else if(i > n/2 -1){
                a++;
                b--;
            }
            printf("\n");
        }
    }
    else{
        int a = n/2,b = n/2;
        for(int i = 0;i < n ;i++){
            for(int j = 0;j < n;j++){
                if(j == a || j == b){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            if(i < n/2 ){
                a--;
                b++;
            }
            else if(i > n/2 -1){
                a++;
                b--;
            }
            printf("\n");
        }
    }
    return 0;
}