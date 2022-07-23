#include<iostream>
using namespace std;

int main(){
    int l1,r1,l2,r2;

    cin >> l1 >> r1 >> l2 >> r2;

    int res = 0;

    if(l2 <= r1 && l2 >= l1 && r2 <= r1){
        res = r2 - l2;
    }else if(l2 < r1 && l2 >= l1 && r2 > r1){
        res = r1 - l2;
    }else if(l2 <= l1 && r2 >= l1 && r2 <= r1){
        res = r2 - l1;
    }else if(l2 < l1 && r2 > r1){
        res = r1 - l1;
    }else{
        res = 0;
    }

    cout << res << endl;

    return 0;
}