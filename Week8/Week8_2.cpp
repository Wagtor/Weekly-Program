#include <iostream>

using namespace std;

int ans[5] = {0, 0, 0, 0, 0};
int m[5] = {1, 5, 10, 50, 100};
int a;
int check[10000];

void func(int i, int n, int cnt_r)
{
    if(check[i] == 1) return;
    int j = n;
    //cout << i << " " << j << " " << m[cnt_r] << " " << cnt_r << "\n";
    if (i == a + 1)
        return;
    if (cnt_r < 0)
        return;
    if (j <= 0 && i < a){
        check[i] = 1;
        func(i + 1, i + 1, 4);        
    }
    if (j == 4)
    {
        j -= 4;
        ans[0]++;
        ans[1]++;
    }
    else if (j == 9)
    {
        j -= 9;
        ans[0]++;
        ans[2]++;
    }
    else if (j >= 40 && j < 50)
    {
        j -= 40;
        ans[2]++;
        ans[3]++;
    }
    else if (j >= 90 && j < 100)
    {
        j -= 90;
        ans[2]++;
        ans[4]++;
    }

    if (m[cnt_r] > j)
    {
        func(i, j, cnt_r - 1);
    }
    else
    {
        j -= m[cnt_r];
        ans[cnt_r]++;
        func(i, j, cnt_r);
    }
}

int main()
{
    cin >> a;
    func(1, 1, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}