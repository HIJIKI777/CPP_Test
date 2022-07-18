#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int i = 0 ;
    vector<int> a{1,2,3};

    for_each(a.begin(),a.end(),[](int i){
        cout << i << endl;
    });


    return 0;
}