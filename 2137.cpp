#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n){
        int arr[n];

        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }

        sort(arr, arr+n);
        for(int i = 0; i < n; ++i){
            cout << setw(4) << setfill('0') << arr[i] << "\n";
        }
    }


    return 0;
}
