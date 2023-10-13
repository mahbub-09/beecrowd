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
        for(int i = 0; i < len; ++i){
            if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
                str[i] += 3;
        }

        for(int i = 0; i < len/2; ++i){
            char temp = str[i];
            str[i] = str[len-1-i];
            str[len-1-i] = temp;
        }

        for(int i = len/2; i < len; i++)
            str[i] -= 1;

        cout << str << endl;
    }



    return 0;
}
