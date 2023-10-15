#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n && n){
        int b = (n*1.0)/90.0;
        double g = (n*7.0)/90.0;
        if((int)g < g)  g += 1;
        cout << "Brasil " << b << " x " << "Alemanha " << (int)g << endl;
    }



    return 0;
}
