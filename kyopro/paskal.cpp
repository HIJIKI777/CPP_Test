#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n;

    int pas[n+10][n+10];

    for(int i = 0; i < n; i++){
        if(i == 0){
            pas[i][0] = 1;
        }else if(i == 1){
            pas[i][0] = pas[i][1] = 1;
        }else{
            for(int j = 0; j < i+1; j++){
                if(j == 0){
                    pas[i][0] = 1;
                }else if(j == i){
                    pas[i][j] = 1;
                }else{
                    pas[i][j] = pas[i-1][j-1] + pas[i-1][j];
                }
            }
        }
    }

    for(int k = 0; k < n; k++){
        for(int l = 0; l < k+1; l++){
            cout << pas[k][l] << " ";
        }
        printf("\n");
    }

    return 0;
}