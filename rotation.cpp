#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main(){
 
    int n,q;
    int p = 0;
    cin >> n >> q;
 
    string s;
    cin >> s;
 
    vector<vector<int>> que (q,vector<int>(2));
 
    for(int i = 0; i < q; i++){
        for(int j = 0;j < 2; j++){
            cin >> que[i][j];
        }
    }
 
    for(int i = 0; i < q; i++){
        if(que[i][0] == 1){
            p = p + que[i][1];
            s = s.substr(n-que[i][1]) + s;
            s = s.erase(que[i][1] + n-que[i][1]);
        }else if(que[i][0] == 2){
            cout << s[que[i][1]-1] << endl;
        }
    }
 
    return 0;
}