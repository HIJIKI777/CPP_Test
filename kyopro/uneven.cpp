#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int count = 0;
    int hund = n / 100;
    int man = n / 10000;

    if(n/100000 == 1){
        count = 90909;
    }else if(n/10000 >= 1 && n/100000 < 1){
        count = 909 + (10000 * (man - 1)) + (n % 10000) + 1;
    }else if(n/1000 >= 1 && n/10000 < 1){
        count = 909;
    }else if(n/100 >= 1 && n/1000 < 1){
        count = 9 + (100 * (hund - 1)) + (n % 100) + 1;
    }else if(n/10 >= 1 && n/100 < 1){
        count = 9;
    }else if(1 <= n && n <= 9){
        count = n;
    }

    cout << count << endl;

    return 0;
}

//1 ~ 100000