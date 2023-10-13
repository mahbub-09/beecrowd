#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long int arr[15] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000};
    while(true){
        string str;
        cin >> str;
        if(str == "0")  break;

        for(int i = 0; i < 15; ++i){
            if(str.length() == i+1){
                cout << arr[i] << endl;
                break;
            }
        }
    }




    return 0;
}
