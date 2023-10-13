#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp;
    int d1, d2, h1, h2, m1, m2, sec1, sec2;

    cin >> temp >> d1;
    cin >> h1 >> temp >> m1 >> temp >> sec1;

    cin >> temp >> d2;
    cin >> h2 >> temp >> m2 >> temp >> sec2;

    int sec = sec2 - sec1;
    int minute = m2 - m1;
    int hour = h2 - h1;
    int day = d2 - d1;

    if(sec < 0){
        sec += 60;
        minute--;
    }

    if(minute < 0){
        minute += 60;
        hour--;
    }

    if(hour < 0){
        hour += 24;
        day--;
    }

    cout << day << " dia(s)" << endl;
    cout << hour << " hora(s)" << endl;
    cout << minute << " minuto(s)" << endl;
    cout << sec << " segundo(s)" << endl;



    return 0;
}

