#include <stdio.h>
#include <iostream>

using namespace std;

void clear(int n,int arr[]){
    for(int i = 0;i <= n;i++){
        arr[i] = 0;
    }
}

int main(){
    int n;
    cin >> n;
    if(n < 6){
        cout << "no" ; 
        return 0;
    }

    int arr[n+1];
    clear(n,arr);
    if(n >= 6) arr[6] = 1;
    if(n >= 9) arr[9] = 1;
    if(n >= 20) arr[20] = 1;
    for(int i = 12;i <= n;i++){
        if(arr[i - 6] == 1 ||arr[i - 9] == 1 || arr[i - 20] == 1)
            arr[i] = 1;
    }
    for(int i = 6;i <= n;i++){
        if(arr[i] == 1){
            cout << i << "\n";
        }
    }
    return 0;
}