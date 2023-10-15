#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int arr[n] = {0}, sum = 0, cnt = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            sum += arr[i];
        }

        sum /= n;

        for(int i = 0; i < n; ++i){
            if(arr[i] > sum)
                ++cnt;
        }

        long double ans = ((double)cnt/n) * 100;

        cout << fixed << setprecision(3) << ans << "%\n";
    }


    return 0;
}
