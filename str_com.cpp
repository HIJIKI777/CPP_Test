#include<iostream>
#include<string>

using namespace std;

int main(){

    int n;
    string s;
    string abc{'A','B','C'};
    int count = 0;

    cin >> n;
    cin >> s;
    
    for(int i = 0; i < n-2; i++){
        if(s[i] == abc[0] && s[i+1] == abc[1] && s[i+2] == abc[2]){
            count = count + 1;
        }
    }

    cout << count << endl;

    return 0;
}