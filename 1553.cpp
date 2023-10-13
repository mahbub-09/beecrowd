#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    while(cin >> m >> n && m &&n){
        int arr[m], idx[100000] = {0}, mx = INT_MIN, cnt = 0;

        for(int i = 0; i < m; ++i){
            cin >> arr[i];
            mx = mx > arr[i] ? mx:arr[i];
            ++idx[arr[i]];
        }

        for(int i = 0; i <= mx; ++i){
            if(idx[i] >= n)
                ++cnt;
        }

        cout << cnt << "\n";
    }


    return 0;
}
