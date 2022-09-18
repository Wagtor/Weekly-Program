#include <iostream>

using namespace std;

int dp[101];
int n;

int func(int m){
    if(m == 0 || m == 6||m == 9|| m == 12 || m == 20){
        return 1;
    }
    else if(m < 6 || m < 0){
        return 0;
    }

    int a = 0,b = 0,c = 0;
    if(m >= 20){
        c = func(m - 20);
    }
    if(m >= 9){
        b = func(m - 9);
    }
    if(m >= 6){
        a = func(m - 6);
    }
    
    if(a || b || c){
        return 1;
    }
    else return 0;
}

int main(){
    cin >> n;
    if(n < 6){
        cout << "no" ;
        return 0;
    }
    for(int i = 6;i <= n;i++){
        if(func(i)){
            cout << i << "\n";
        }
    }
    return 0;
}