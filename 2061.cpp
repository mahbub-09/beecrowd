#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    string str;
    
    while(n2--){
        cin >> str;
        if(str == "fechou")
            n1 += 1;
            
        else
            n1 -= 1;
    }
    
    cout << n1 << endl;
 
    
    
    return 0;
}