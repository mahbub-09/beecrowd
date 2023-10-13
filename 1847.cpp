#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if(n2 > n1 && n3 <= n2)
        cout << ":(\n";

    else if(n2 > n1 && n3 > n2 && (n3-n2) < (n2-n1))
        cout << ":(\n";

    else if(n2 > n1 && n3 > n2 && (n3-n2) >= (n2-n1))
        cout << ":)\n";

    else if(n2 < n1 && n3 < n2 && (n2-n3) < (n1-n2))
        cout << ":)\n";

    else if(n2 < n1 && n3 < n2 && (n2-n3) >= (n1-n2))
        cout << ":(\n";

    else if((n1 == n2) && n3 > n2)
        cout << ":)\n";

    else if((n1 == n2) && n3 < n2)
        cout << ":(\n";

    else if(n2 < n1 && n3 >= n2)
        cout << ":)\n";

    else
        cout << ":(\n";


    return 0;
}
