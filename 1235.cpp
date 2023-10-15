#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        string str;
        getline(cin, str);

        int len = str.size();
        for(int i = len/2-1; i >= 0; i--){
            cout << str[i];
        }

        for(int i = len-1; i >= len/2; i--){
            cout << str[i];
        }

        cout << endl;
    }



    return 0;
}
