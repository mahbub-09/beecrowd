#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double old_price, new_price;
    cin >>  old_price >> new_price;

    double increase = ((new_price - old_price) * 100.00) / old_price;
    cout << fixed << setprecision(2) << increase << "%" << endl;



    return 0;
}
