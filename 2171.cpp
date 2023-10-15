#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n){
        int fink = 0;
        for(int i = 1; i+fink <= n; i++){
            fink += i;
        }

        cout << fink << " " << (n-fink) << endl;

    }

    return 0;
}
