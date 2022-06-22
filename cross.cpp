#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int h,w;
    cin >> h >> w;

    vector<vector<int>> v (h,vector<int>(w));
    vector<int> h_sum(h);
    vector<int> w_sum(w);
    vector<vector<int>> v_res (h,vector<int>(w));


    for(int i = 0; i < h; i++){
        for(int j = 0;j < w; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        int sum = 0;
        for(int j = 0; j < w; j++){
            sum = sum + v[i][j];
        }
        h_sum[i] = sum;
    }

    for(int j = 0; j < w; j++){
        int sum = 0;
        for(int i = 0; i < h; i++){
            sum = sum + v[i][j];
        }
        w_sum[j] = sum;
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            v_res[i][j] = h_sum[i] + w_sum[j] - v[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << v_res[i][j] << " ";
        }
        printf("\n");
    }

    return 0;
}
