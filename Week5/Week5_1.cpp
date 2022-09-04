#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    for(int i = n - 1;i >= 0;i--){
        for(int j = 0;j < m;j++){
            cin >> arr[i][j];
        }
    }
    int n_arr[n];
    for(int i = 0;i < m;i++){
        cin >> n_arr[i];
    }
/*
    for(int i = n - 1;i >= 0;i--){
        for(int j = m - 1;j >= 0;j--){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    */
    for(int i = 0;i < m;i++){
           // cout << n_arr[i] << "\n";
        for(int k = 0;k < n_arr[i];k++){
            for(int j = n - 1;j >= 0;j--){
                if(arr[j][i] == 'O' && j == n - 1) break;
                else if(arr[j][i] == 'O' && j + 1 < n){
                    //cout << "1" << "\n";
                    arr[j + 1][i] = '#';
                    break;
                } 
                else if(arr[j][i] == '#' && j + 1 < n) {
                    //cout << "2" << "\n";
                    arr[j+1][i] = '#'; 
                    break;
                }
                else if(j == 0 && arr[j][i] != 'O'){
                   // cout << "3" << "\n";
                    arr[j][i] = '#';
                    break;
                } 
            }
        }
    }
    for(int i = n - 1;i >= 0;i--){
        for(int j = 0;j < m;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}