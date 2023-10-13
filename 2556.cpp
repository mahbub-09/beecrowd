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

//        int arr[n], mn = INT_MAX, mx = INT_MIN, mx_idx, mn_idx;
//        for(int i = 0; i < n; ++i){
//            cin >> arr[i];
//
//            if(mn > arr[i]){
//                mn = arr[i];
//                mn_idx = i;
//            }
//
//            if(mx < arr[i]){
//                mx = arr[i];
//                mx_idx = i;
//            }
//        }
//
//        arr[mn_idx] = 0;
//        arr[mx_idx] = 0;
//        mn = INT_MAX;
//        mx = INT_MIN;
//
//        for(int i = 0; i < n; ++i){
//            for(int j = i+1; j < n-1; ++j){
//                if(arr[i] < arr[j]){
//                    swap(arr[i], arr[j]);
//                }
//            }
//        }
//
//        cout << (n/2) << " " << abs(arr[0] - arr[n-3]) << "\n";
//    }
