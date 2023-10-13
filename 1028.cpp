#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int n1, n2, mn, mx, mod;
        scanf("%d %d", &n1, &n2);
        mn = min(n1, n2);
        mx = max(n1, n2);

        while(mx % mn){
            mod = mx % mn;
            mx = mn;
            mn = mod;
        }

        if(mn)
            printf("%d\n", mn);
        else
            printf("1\n");

    }


    return 0;
}
