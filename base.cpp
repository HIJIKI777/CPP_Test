#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int p = 0;

    cin >> n;

    vector<int> a(n);

    for(auto &number: a){
        cin >> number;
    }

    if(n > 1){
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                a[i] = a[i] + a[j];
            }

            if(a[i] >= 4){
                p = p+1;
            }
        }
    }else if(n == 1){
        if(a[0] >= 4){
            p = p+1;
        }
    }

    if(n > 1){
        if(a[n-1] >= 4){
            p = p+1;
        }
    }

    cout << p << endl;

    return 0;
}