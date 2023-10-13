#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int arr[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

    int n, cnt = 0;
    cin >> n;

    while(n){
        for(int i = 0; i < sizeof(arr)/arr[0]; ++i){
            if(arr[i] > n){
                n -= arr[i-1];
                ++cnt;
                break;
            }
        }
    }
N
    cout << cnt << endl;




    return 0;
}
