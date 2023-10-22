#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        n = (n+1)/2;
        int limit = 1;

        for(int i = 1; i <= n; ++i){
            //space printer
            for(int j = 1; j <= n-i; ++j)
                cout << " ";

            //star printer
            for(int k = 1; k <= limit; ++k)
                cout << "*";

            limit += 2;
            cout << endl;
        }

        //tail printer
        for(int i = 1; i <= 2; ++i){
            //space printer
            for(int j = 1; j <= n-i; ++j){
                cout << " ";
            }
            if(i == 1)
                cout << "*";
            else
                cout << "***";

            cout << endl;
        }
        cout << endl;
    }



    return 0;
}

