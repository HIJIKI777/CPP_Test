#include<iostream>
#include<array>
#include<algorithm>
#include<vector>

using namespace std;

void CheckArrayContents(array<int,5> arr){
    for_each(arr.begin(),arr.end(),[](int i){
        cout << i << " ";
    });
    cout << endl;
}

int main(){

    array<int,5> arr1 = {1,2,3,4,5};
    array<int,5> arr2 = {1};
    array<int,6> arr3 = {6,7,8,9,10,0};
    array<float,2> arr4 = {3.5,3.34};

    arr2[3] = 70;
    CheckArrayContents(arr2);
    arr2 = arr1;
    CheckArrayContents(arr2);
    arr2[3] = arr3[5];
    CheckArrayContents(arr2);

    arr2.back() = 334;
    CheckArrayContents(arr2);

    if(!arr2.empty()) cout << "中身あるよ" << endl;

    return 0;
}