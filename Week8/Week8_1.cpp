#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans[5] = {0,0,0,0,0};
    int m[5] = {1,5,10,50,100};

    for(int i = 1;i <= n;i++){
        int j = i;
        int cnt_r = 4;
        while(j > 0){

            if(j == 4){
                j -= 4;
                ans[0]++;
                ans[1]++;
                continue;
            }
            else if(j == 9){
                j -= 9;
                ans[0]++;
                ans[2]++;
                continue;
            }
            else if(j >= 40 && j < 50){
                j -= 40;
                ans[2]++;
                ans[3]++;
                continue;
            }
            else if(j >= 90 && j < 100){
                j -= 90;
                ans[2]++;
                ans[4]++;
                continue;
            }

            if(m[cnt_r] > j){
                cnt_r--;
                continue;
            }
            else{
             //   cout << m[cnt_r] << " j : " << j << "\n";
                j -= m[cnt_r];
                ans[cnt_r]++;
            }            
        }
    }
    for(int i = 0;i < 5;i++){
        cout << ans[i] << " ";
    }
    return 0;
}