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

//2次元のもの（行列など）を入力する時は下のように2次元配列を定義できる
// int sumH[H];             <- 変数でサイズを定義
// int sumW[W];
// int A[H][W];
// rep(h,H) sumH[h] = 0;    <- 初期化．これはベクトルの初期化で0がh個格納されることと同義
// rep(w,W) sumW[w] = 0;
// rep(h,H)rep(w,W) {
//     int a;               <- この方はまとめて入れてる
//     cin >> a;
//     A[h][w] = a;
//     sumH[h] += a;
//     sumW[w] += a;
// }