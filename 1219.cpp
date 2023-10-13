#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long double a, b, c, s, triangle_area, inner_circle_area, outer_circle_area, inner_radius, outer_radius;

    while(cin >> a >> b >> c){
        s = (a + b + c)/2;

        triangle_area = sqrt(s*(s-a)*(s-b)*(s-c));
        inner_radius = triangle_area/s;
        outer_radius = (a*b*c)/(4*triangle_area);
        outer_circle_area = PI*pow(outer_radius, 2) - triangle_area;
        inner_circle_area = PI*pow(inner_radius, 2);
        triangle_area -= inner_circle_area;

        cout << fixed << setprecision(4) << outer_circle_area << " ";
        cout << fixed << setprecision(4) << triangle_area << " ";
        cout << fixed << setprecision(4) << inner_circle_area << endl;
    }




    return 0;
}
