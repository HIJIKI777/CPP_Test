#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n = 0,k = 0;
    vector<int> a{};
    vector<int> b{};

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n-k; i++){
        if(b != a){
        b = a;
        sort(a.begin()+i, a.end()+i+k);
        }else if(b == a){
            cout << "Yes" << endl;
        }
        if(i = n-k-1){
            cout << "No" << endl;
        }
    }

    return 0;
}