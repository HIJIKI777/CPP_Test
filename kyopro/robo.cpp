#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> w(n);

    for(auto &number: w){
        cin >> number;
    }



    int max = 0;
    int maxi = 0;

    sort(w.begin(),w.end());

    for(int x = 1; x < w[n-1] + 2; x++){
        max = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && w[i] >= x){
                max = max + 1;
            }else if(s[i] == '0' && w[i] < x){
                max = max + 1;
            }
        }
        if(max > maxi){
            maxi = max;
        }
    }

    cout << maxi << endl;

    return 0;
}