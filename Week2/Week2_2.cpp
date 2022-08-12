#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int a = 0,b = 2*n-2;
    for(int i = 0;i < n + n - 1;i++){
        for(int j = 0;j < n + n - 1;j++){
            if(j <= a || j >= b) printf("*");
            else printf(" ");
        }
        if(i < n - 1){
            a++;
            b--;
        }
        else{
            a--;
            b++;
        }
        printf("\n");
    }
    return 0;
}