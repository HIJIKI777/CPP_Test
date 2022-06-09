#include <iostream>
#include "sample.h"

using namespace std;

int main(void){
    CSample obj1,obj2;
    int num1;
    int num2;


    cout << "Input int = " << endl;
    cin >> num1;
    cin >> num2;

    obj1.set(num1);
    obj2.set(num2);
    cout << obj1.get() <<  endl;
    cout << obj2.get() << endl;
    return 0;
}