#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        long long int n;
        scanf("%lld", &n);

        if(n == 0 || n % 4 == 0)    printf("1\n");
        else if(n % 4 == 1)         printf("7\n");
        else if(n % 4 == 2)         printf("9\n");
        else if(n % 4 == 3)         printf("3\n");
    }



    return 0;
}
