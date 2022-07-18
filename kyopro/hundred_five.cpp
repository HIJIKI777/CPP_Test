#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int count = 0;
    int comp = 0;

    for(int i = 1; i <= n; i+=2){
        for(int j = 1; j <= n; j++){
            if(i%j == 0){
                count = count + 1;
            }
        }
        if(count == 8){
            comp = comp + 1;
        }
        count = 0;
    }

    cout << comp << endl;

    return 0;
}