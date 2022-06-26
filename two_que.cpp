#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<vector<int>> c(n,vector<int>(1));

    for(int i = 0; i < n; i++){
        for(int j = 0;j < 2; j++){
            cin >> c[i][j];
        }
    }

    int q;
    cin >> q;

    vector<vector<int>> l(q,vector<int>(1));



    return 0;
}