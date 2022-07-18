#include<iostream>
#include<string>
using namespace std;

int main(){

    int n,x;
    cin >> n >> x;

    string s[30000];

    for(int i = 0; i < 26; i++){
        int k = i*n;
        for(int j = 0; j < n; j++){
            s[k+j] = 65 + i;
        }
    }

    cout << s[x-1] << endl;

    return 0;
}