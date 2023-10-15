#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, width, height;

    while(cin >> length >> width >> height && length && width && height){
        long long int vol = length*width*height;
        long double idx = 1.0/3;
        cout << (int)pow(vol, idx) << endl;
    }



    return 0;
}
