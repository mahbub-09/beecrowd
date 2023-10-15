#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(getline(cin, str)){
        if(str == "*")  break;

        int space = 0, letter = 0;
        char ch = tolower(str[0]);
        for(int i = 1; str[i] != '\0'; ++i){
            if(str[i] == ' ')
                ++space;
            if(tolower(str[i]) == ch && str[i-1] == ' ')
                ++letter;
        }

        if(space == letter) cout << "Y" << endl;
        else                cout << "N" << endl;
    }



    return 0;
}
