#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<vector<int>> v (n,vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            cin >> v[i][j];
        }
    }

    int res[1000];


    return 0;
}