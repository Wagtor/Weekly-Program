#include <iostream>

using namespace std;

char arr[21][21];

int func(int pos_i,int pos_j){
    if(pos_i < 0) return 0;
    if(arr[pos_i][pos_j] == 'O') return pos_i + 1;
    if(arr[pos_i][pos_j] == '#') return pos_i + 1;
    
    return func(pos_i - 1,pos_j);
}

int main(){
    int n,m;
    cin >> n >> m;
    for(int i = n - 1;i >= 0;i--){
        for(int j = 0;j < m;j++){
            cin >> arr[i][j];
        }
    }
    int n_arr[n];
    for(int i = 0;i < m;i++){
        cin >> n_arr[i];
    }

    for(int i = 0;i < m;i++){
        for(int j = 0;j < n_arr[i];j++){
            arr[func(n - 1,i)][i] = '#';
        }
    }
    for(int i = n - 1;i >= 0;i--){
        for(int j = 0;j < m;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
}