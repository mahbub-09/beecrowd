#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int b[], int c[], string d[], int n)
{
    int i = 0;
    while(i < n-1)
    {
        int k = 0;
        while(k < n-i-1)
        {
            if(a[k+1] > a[k]){
                swap(a[k], a[k+1]);
                swap(b[k], b[k+1]);
                swap(c[k], c[k+1]);
                swap(d[k], d[k+1]);
            }

            if(a[k+1] == a[k]){
                if(b[k+1] > b[k]){
                    swap(a[k], a[k+1]);
                    swap(b[k], b[k+1]);
                    swap(c[k], c[k+1]);
                    swap(d[k], d[k+1]);
                }

                if(b[k+1] == b[k]){
                    if(c[k+1] > c[k]){
                        swap(a[k], a[k+1]);
                        swap(b[k], b[k+1]);
                        swap(c[k], c[k+1]);
                        swap(d[k], d[k+1]);
                    }

                    if(c[k] == c[k+1]){
                        if(d[k+1] < d[k]){
                            swap(a[k], a[k+1]);
                            swap(b[k], b[k+1]);
                            swap(c[k], c[k+1]);
                            swap(d[k], d[k+1]);
                        }
                    }
                }
            }
            k++;
        }
        i++;
    }
}


int main()
{
    int n;
    cin >> n;

    string str[n];
    int gold[n], silver[n], bronze[n];

    for(int i = 0; i < n; ++i){
        cin >> str[i] >> gold[i] >> silver[i] >> bronze[i];
    }

    bubble_sort(gold, silver, bronze, str, n);

    for(int i = 0; i < n; ++i){
        cout << str[i] << " " << gold[i] << " " << silver[i] << " " << bronze[i] << endl;
    }


    return 0;
}
