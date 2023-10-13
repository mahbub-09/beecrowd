#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n){
        int arr[n];
        for(int i = 0; i < n; ++i)
            cin >> arr[i];

        sort(arr, arr+n);

        int mn = arr[n/2-1];
        int mx = arr[n/2];

        cout << n/2 << " " << (mx-mn) << "\n";
    }


    return 0;
}

