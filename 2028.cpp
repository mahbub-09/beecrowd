#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n, cse = 1;

    while(cin >> n){
        int ans = 1, inc = 0;

        for(int i = 0; i <= n; ++i){
            ans += inc;
            ++inc;
        }

        cout << "Caso " << cse << ": " << ans << " numero";
        if(ans > 1)
            cout << "s";

        cout << endl;

        cout << "0";
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <=i ; ++j){
                cout << " " << i;
            }
        }

        cout << endl << endl;
        ++cse;
    }




    return 0;
}
