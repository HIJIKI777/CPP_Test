#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;


    vector< vector<int> > v (n, vector<int>(2));

    for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 2; ++j) {
                    cin >> v[i][j];
            }
    }

    for(int i = 0; i < n-1; i++){
        if(v[i][0] <= v[i+1][0] && v[i][1] > v[i+1][1]){
            
        }
    }

    return 0;
}