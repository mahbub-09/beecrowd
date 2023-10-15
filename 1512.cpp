#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll int gcd(ll int num1, ll int num2){
    ll int mx = max(num1, num2);
    ll int mn = min(num1, num2);
    ll int mod;
    while(mx % mn){
        mod = mx % mn;
        mx = mn;
        mn = mod;
    }

    return mn;
}

int main()
{
    ll int n, a, b;

    while(cin >> n >> a >> b && n && a && b){
        ll int k = a*b;
        k = k/gcd(a, b);

        cout << ((n/a + n/b) - n/k) << endl;
    }



    return 0;
}
