#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int r1, x1, y1, r2, x2, y2;
    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        float dist;

        dist = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

        if((dist + r2) <= r1)
            cout << "RICO" << endl;

        else
            cout << "MORTO" << endl;
    }


    return 0;
}
