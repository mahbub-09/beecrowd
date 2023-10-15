#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int test;
    cin >> test;

    while(test--){
        long double n;
        cin >> n;
        long long int ans = (-1 + sqrt(1 + 8*n)) / 2;
        cout << ans << "\n";
    }


    return 0;
}
