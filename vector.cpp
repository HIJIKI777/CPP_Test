#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){

    vector<int> vec{3,2,1};

    vec.emplace_back(7);
    vec.insert(vec.begin() + 2,60);

    for(auto &num:vec){
        cout << num << endl;
    }

    int d = vec[2];

    sort(vec.begin(),vec.end());

    int num = 3;
    auto n = find(vec.begin(),vec.end(),num);

    for(int i = 0; i < vec.size(); i++){
    cout << vec[i];
    }

    cout << d << endl;

    return 0;
}