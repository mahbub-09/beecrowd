#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int team, match;
    while(cin >> team >> match && team){
        int total_score = 0, gained_score = 0, temp;
        total_score = match*3;

        string str;
        for(int i = 0; i < team; ++i){
            cin >> str >> temp;
            gained_score += temp;
        }

        cout << (total_score - gained_score) << endl;
    }


    return 0;
}
