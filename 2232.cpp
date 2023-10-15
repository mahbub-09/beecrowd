#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while(n--){
        int k;
        cin >> k;

        long long int ans = pow(2, k) - 1;
        cout << ans << endl;
    }

    return 0;
}
