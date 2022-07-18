#include<iostream>
#include<string>
using namespace std;

int main(){

    string s,t;

    cin >> s;
    cin >> t;

    for(int i = 1; i < s.size() - 1; i ++){
        if(s[i] == s[i-1] && s[i] != t[i]){
            string u = {s[i]};
            s.insert(i,u);
        }
    }

    if(s == t) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}