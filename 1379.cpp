#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n1, n2;

    while(cin >> n1 >> n2 && n1 && n2){
        long double ans = (n1*2 - n2);
        cout << fixed << setprecision(0) << ans << endl;
    }


    return 0;
}
