#include <stdio.h>
#include <iostream>

using namespace std;

void clear(int max,int arr[]){
    for(int i = 0;i <= max;i++){
        arr[i] = 0;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
    }
    int cnt[max + 1];
    clear(max,cnt);
    for(int i = 0;i < n;i++){
        cnt[arr[i]]++;
    }
    int max_cnt = 0;
    for(int i = 0;i <= max;i++){
        if(max_cnt < cnt[i]) max_cnt = cnt[i];
    }

    for(int i = 0;i <= max;i++){
        if(max_cnt == cnt[i]) cout << i << " ";
    }

    return 0;
}