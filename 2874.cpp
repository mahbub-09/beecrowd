#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int string_to_decimal(string str);

int main()
{
    int n;
    while(cin >> n){
        string str;

        for(int i = 0; i < n; ++i){
            cin >> str;
            cout << (char)string_to_decimal(str);
        }

        cout << "\n";
    }



    return 0;
}

int string_to_decimal(string str){
    int len = str.length();
    int decimal = 0;

    for(int i = len-1, j = 0; i > -1; --i, j++){
        if(str[i] == '1'){
            decimal += pow(2, j);
        }
    }

    return decimal;
}
