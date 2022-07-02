#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    int k;
    cin >> k;

    if(k >= 10 && k < 60){
        cout << "21:" << k << endl;
    }else if(k >= 0 && k < 10){
        cout << "21:0" << k << endl;
    }else if(k >= 60 && k < 70){
        cout << "22:0" << k - 60 << endl;
    }else if(k >= 70){
        cout << "22:" << k - 60 << endl;
    }


    return 0;
}