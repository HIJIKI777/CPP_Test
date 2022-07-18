#include<iostream>
using namespace std;

int main(){

    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;
    int res = 0;

    if(x < m){
        res = t;
    }else if(x >= m){
        res = t - (d * (x - m));
    }


    cout << res << endl;

    return 0;
}