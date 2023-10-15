#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, c;
    cin >> l >> c;

    int big = l*c + (l-1)*(c-1);
    int small = 2*(l-1) + 2*(c-1);

    cout << big << endl << small << endl;



    return 0;
}
