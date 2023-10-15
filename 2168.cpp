#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total = 0;
    cin >> n;
    ++n;

    int arr[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n-1; ++i){
        for(int j = 0; j < n-1; ++j){
            if(arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i+1][j+1] > 1)
                cout << "S";
            else
                cout << "U";
        }
        cout << "\n";
    }


    return 0;
}
