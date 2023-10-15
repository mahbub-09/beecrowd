#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n){
        int flag = 0;
        for(int i = 0; i <= sqrt(n); ++i){
            for(int j = 0; ; ++j){
                if(i*i + j*j == n)  ++flag;
                else if(i*i + j*j > n)  break;
            }
            if(flag){
                break;
            }
        }

        if(flag)    cout << "YES" << endl;
        else        cout << "NO" << endl;
    }



    return 0;
}
