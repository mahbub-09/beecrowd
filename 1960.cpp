#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void one_digit_number(int number);
void two_digit_number(int number);
void three_digit_number(int number);

int main()
{
    int n;
    cin >> n;

    if(n < 10)
        one_digit_number(n);

    else if(n < 100)
        two_digit_number(n);

    else if(n < 1000)
        three_digit_number(n);

    cout << "\n";


    return 0;
}


void one_digit_number(int number){
    if(number == 1){
        cout << "I";
    }
    else if(number == 2){
        cout << "II";
    }
    else if(number == 3){
        cout << "III";
    }
    else if(number == 4){
        cout << "IV";
    }
    else if(number == 5){
        cout << "V";
    }
    else if(number == 6){
        cout << "VI";
    }
    else if(number == 7){
        cout << "VII";
    }
    else if(number == 8){
        cout << "VIII";
    }
    else if(number == 9){
        cout << "IX";
    }
}

void two_digit_number(int number){
    int first_digit = number/10;
    int last_digit  = number%10;

    if(first_digit == 1){
        cout << "X";
    }
    else if(first_digit == 2){
        cout << "XX";
    }
    else if(first_digit == 3){
        cout << "XXX";
    }
    else if(first_digit == 4){
        cout << "XL";
    }
    else if(first_digit == 5){
        cout << "L";
    }
    else if(first_digit == 6){
        cout << "LX";
    }
    else if(first_digit == 7){
        cout << "LXX";
    }
    else if(first_digit == 8){
        cout << "LXXX";
    }
    else if(first_digit == 9){
        cout << "XC";
    }

    one_digit_number(last_digit);
}
void three_digit_number(int number){
    int first_digit = number/100;

    if(first_digit == 1){
        cout << "C";
    }
    else if(first_digit == 2){
        cout << "CC";
    }
    else if(first_digit == 3){
        cout << "CCC";
    }
    else if(first_digit == 4){
        cout << "CD";
    }
    else if(first_digit == 5){
        cout << "D";
    }
    else if(first_digit == 6){
        cout << "DC";
    }
    else if(first_digit == 7){
        cout << "DCC";
    }
    else if(first_digit == 8){
        cout << "DCCC";
    }
    else if(first_digit == 9){
        cout << "CM";
    }

    two_digit_number(number%100);
}
