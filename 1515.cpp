#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int test;

    while(cin >> test && test){
        string str, main_str;
        ll int year, time, mn = LLONG_MAX;
        while(test--){
            cin >> str >> year >> time;
            if((year - time) < mn){
                mn = year-time;
                main_str = str;
            }
        }
        cout << main_str << "\n";
    }


    return 0;
}
