#include<iostream>
#include<deque>
#include<vector>
#include<deque>
using namespace std;
 
int main(){
 
    int n,q;
    cin >> n >> q;
 
    string s;
    cin >> s;
    deque<int> s1;

    for(int i = 0; i < s.size(); i++){
        s1.push_back(s[i]);
    }

    cout << s1 << endl;

    vector<vector<int>> que (q,vector<int>(2));
 
    for(int i = 0; i < q; i++){
        for(int j = 0;j < 2; j++){
            cin >> que[i][j];
        }
    }
 
    for(int i = 0; i < q; i++){
        if(que[i][0] == 1){
            s = s.substr(n-que[i][1]) + s;
            s = s.erase(que[i][1] + n-que[i][1]);
        }else if(que[i][0] == 2){
            cout << s[que[i][1]-1] << endl;
        }
    }
 
    return 0;
}