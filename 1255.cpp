#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        string str;
        cin >> str;
        int arr[26] = {0}, mx = -1;

        for(int i = 0; str[i] != '\0'; i++){
            if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z'){
                arr[tolower(str[i])-'a']++;
            }
        }

        for(int i = 0; i < 26; i++){
            mx = arr[i] > mx ? arr[i] : mx;
        }

        for(int i = 0; i < 26; i++){
            if(mx == arr[i]){
                cout << (char)(i+'a');
            }
        }


        cout << endl;
    }

    return 0;
}
