#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n + n - 1;i++){
        for(int j = 0;j < n + n - 1;j++){
            if((j <= i && i < n) || (j >= 2*n - i - 2 && i < n) || (i >= n && j <= 2*n - i - 2) || (i >= n && j >= i )) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}