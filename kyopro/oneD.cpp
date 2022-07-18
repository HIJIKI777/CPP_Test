#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n,k,q;

    cin >> n >> k >> q;

    vector<int> a(k);
    vector<int> l(q);

    for(auto &number: a){
        cin >> number;
    }

    for(auto &number: l){
        cin >> number;
    }

    for(int i = 0; i < q; i++){
        if(a[l[i] - 1] >= n || a[l[i] - 1] + 1 == a[l[i]]){
        }else{
            a[l[i] - 1]++;
        }
    }

    for(int i = 0; i < k; i++){
        cout << a[i] << " ";
    }



    return 0;
}