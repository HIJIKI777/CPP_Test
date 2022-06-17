#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int a,b,k;
    cin >> a >> b >> k;

    vector<int> a_vec{};
    vector<int> b_vec{};
    vector<int> yaku{};

    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            a_vec.insert(a_vec.begin(),i);
        }
    }
    
    for(int i = 1; i <= a; i++){
        if(b % i == 0){
            b_vec.insert(b_vec.begin(),i);
        }
    }

    for(int i = 0; i < a_vec.size(); i++){
        for(int j = 0; j < b_vec.size(); j++){
            if(b_vec[j] == a_vec[i]){
                yaku.insert(yaku.begin(),b_vec[j]);
            }
        }
    }

    sort(yaku.begin(),yaku.end());

    unique(yaku.begin(),yaku.end());
    yaku.erase(unique(yaku.begin(), yaku.end()), yaku.end());
    //unique,erase で重複を消せる

    int x = yaku.size();
    cout << yaku[x-k] << endl;

    return 0;
}