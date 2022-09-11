#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int check = 1;
    for(int i = 2;i <= n/2;i++){
        if(n % i == 0){
            check = 0;
        }
    }
    
    if(check) cout << n << " is Prime number";
    else cout << n << "is not Prime number";
    return 0;
}