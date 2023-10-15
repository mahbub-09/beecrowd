#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;

    while(cin >> n1 && n1){
        cin >> n2 >> n3;

        int k = ((n1*n2*n3)/(n3-n1));
        if(k > 1)
            cout << k << " paginas" << endl;
        else
            cout << k << " pagina" << endl;
    }


    return 0;
}
