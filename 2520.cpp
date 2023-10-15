#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    while(cin >> m >> n){
        int temp, i1, j1, i2, j2;

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                cin >> temp;

                if(temp == 1){
                    i1 = i+1;
                    j1 = j+1;
                }

                if(temp == 2){
                    i2 = i+1;
                    j2 = j+1;
                }
            }
        }

        cout << (abs(i1-i2)+abs(j1-j2)) << "\n";
    }


    return 0;
}
