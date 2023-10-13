#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n, temp;
    cin >> n;

    int totser, totblo, totatt, sucser, sucblo, sucatt;
    totser = totblo = totatt = sucser = sucblo = sucatt = 0;

    while(n--){
        cin >> str >> temp;
        totser += temp;

        cin >> temp;
        totblo += temp;

        cin >> temp;
        totatt += temp;

        cin >> temp;
        sucser += temp;

        cin >> temp;
        sucblo += temp;

        cin >> temp;
        sucatt += temp;
    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << ((double)sucser/totser)*100 << " %.\n";
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << ((double)sucblo/totblo)*100 << " %.\n";
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << ((double)sucatt/totatt)*100 << " %.\n";


    return 0;
}
