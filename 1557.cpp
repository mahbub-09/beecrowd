#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    while(cin >> n && n){
        if(n == 1){
            cout << "1" << endl << endl;
            continue;
        }

        vector<ll int> vec;
        int val = 1, j;
        for(int i = 0; i < n*2 - 1; ++i){
            vec.push_back(val);
            val *= 2;
        }

        ll int lastDigit = vec[vec.size()-1], format = 0;
        while(lastDigit > 0){
            format++;
            lastDigit /= 10;
        }

        for(int i = 0; i < n; ++i){
            for(int j = i; j < i+n; ++j){
                if(j == i+n-1){
                    cout << setw(format) << vec[j] << endl;
                    break;
                }
                cout << setw(format) << vec[j] << " ";
            }
        }

        cout << endl;
    }


    return 0;
}
