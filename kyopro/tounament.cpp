#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    bool incorrect = false;

    string a[1100];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i){
                printf("i is j");
                continue;
            }
            if(a[i][j] == 'W' && a[j][i] == 'L'){
                printf("win");
            }else if(a[i][j] == 'L' && a[j][i] == 'W'){
                printf("lose");
            }else if(a[i][j] == 'D' && a[j][i] == 'D'){
                printf("draw");
            }else{
                incorrect = true;
                break;
            }
        }
        if(incorrect){
            break;
        }
    }

    if(incorrect){
        cout << "incorrect" << endl;
    }else{
        cout << "correct" << endl;
    }


    return 0;
}