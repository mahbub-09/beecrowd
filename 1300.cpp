#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int angle;

    while(cin >> angle){

        if(angle % 6 == 0)
            cout << "Y\n";
        else
            cout << "N\n";
    }


    return 0;
}
