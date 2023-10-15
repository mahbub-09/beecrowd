#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n){
        char arr[n], cnt = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(arr[i] == 'D')
                cnt += 1;

            else
                cnt -= 1;
        }

        int k = cnt > 0 ? 0 : 1;

        cnt = abs(cnt);
        while(cnt > 3){
            cnt -= 4;
        }

        if(!cnt)
            cout << "N\n";
        if(cnt == 2)
            cout << "S\n";

        if(!k){
            if(cnt == 1)
                cout << "L\n";

            if(cnt == 3)
                cout << "O\n";
        }

        if(k){
            if(cnt == 1)
                cout << "O\n";

            if(cnt == 3)
                cout << "L\n";
        }
    }


    return 0;
}
