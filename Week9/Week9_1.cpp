#include <iostream>
#include <algorithm>    

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int curr = 1;
    if(arr[0] == 0){
        while(arr[curr] == 0){
            curr++;
        }
        swap(arr[0],arr[curr]);
    }

    for(int i = 0;i < n;i++){
        cout << arr[i];
    }
    return 0;
}