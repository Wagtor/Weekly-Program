#include <stdio.h>
#include <iostream>

using namespace std;

int isPrime(int n,int arr[]);

void cleanArr(int n,int arr[]){
    for(int i = 0;i <= n;i++){
        arr[i] = 0;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    cleanArr(n,arr);
    if(isPrime(n,arr) == 0){
        cout << n << " is Prime number"; 
    }
    else cout << n << " is not Prime number";
    return 0;
}


isPrime(int n,int arr[]){
    arr[0] = 1; arr[1] = 0;
    for(int i = 2;i <= n;i++){
        if(arr[i] == 1) continue;
        for(int j = i + i;j <= n;j += i){
            arr[j] = 1;
        }
    }
    
    return arr[n];
}