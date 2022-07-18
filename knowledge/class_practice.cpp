#include<iostream>
using namespace std;

class bmi{

    public:
            float bmi_res = 0.0f;
    bmi(){
        cout << "bmi called" << endl;
    }

    ~bmi(){
        cout << "bmi destructed" << endl;
    }

    public:
    float bmi_cal(double taiju, float sintyo){
        bmi_res = taiju * (1 / (sintyo * sintyo));
        return bmi_res;
    }
};

int main(){

    bmi BMI;
    float weight;
    float tall;
    float result;

    cin >> weight >> tall;

    result = BMI.bmi_cal(weight,tall);

    cout << result << endl;

    return 0;
}