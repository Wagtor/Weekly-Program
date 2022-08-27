#include <stdio.h>

int n_cnt[10005];

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],max = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
        n_cnt[arr[i]]++;
        if(max < arr[i]) max = arr[i];
    }
    int n_max = 0;
    for(int i = 0;i <= max;i++){
        if(n_max < n_cnt[i]){
            n_max = n_cnt[i];
        }
    }
    
    for(int i = 0;i <= max;i++){
        if(n_max == n_cnt[i]){
            printf("%d ",i);
        }
    }
    return 0;
}