#include<iostream>

using namespace std;

int main(){

    int n = 0;
    bool exist = false;
    cin >> n;

    for(int m = 1; m < 10; m++){
        for(int l = 1; l < 10; l++){
            if(m * l == n){
                exist = true;
                cout << "Yes" << endl;
                break;
            }
        }
        if(exist){
            break;
        }
    }

    if(!exist){
        cout << "No" << endl;
    }

    return 0;
}