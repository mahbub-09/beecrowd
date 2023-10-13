#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2 && (x1 || y1 || x2 || y2)){
        int x = abs(x1 - x2);
        int y = abs(y1 - y2);

        if(!x && !y)
            cout << "0\n";

        else if((!x && y) || (x && !y))
            cout << "1\n";

        else if(x == y)
            cout << "1\n";

        else
            cout << "2\n";


    }


    return 0;
}
