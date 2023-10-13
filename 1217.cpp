#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp_n, fruit = 1, total_fruit = 0, day = 1;
    float temp_price, total_price = 0;
    string str;
    cin >> n;
    temp_n = n;

    while(temp_n--){
        cin >> temp_price;
        cin.ignore();
        total_price += temp_price;

        getline(cin, str);
        for(int i = 0; i < str.length(); ++i){
            if(str[i] == ' ')
                ++fruit;
        }
        total_fruit += fruit;

        cout << "day " << day << ": " << fruit << " kg\n";
        fruit = 1;
        ++day;
    }

    cout << fixed << setprecision(2) << (double)total_fruit/n << " kg by day\n";
    cout << "R$ " << fixed << setprecision(2) << total_price/n << " by day\n";


    return 0;
}
