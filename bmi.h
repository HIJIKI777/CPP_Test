#ifndef _BMI_H
#define _BMI_H

#include<iostream>

using namespace std;

class bmi(){

    double bmi_res = 0.0f;

    bmi(){
        cout << "bmi called" << endl;
    }

    ~bmi(){
        cout << "bmi destructed" << endl;
    }

    public float bmi_cal(double taiju , sintyo){
        bmi_res = taiju * (1 / (sintyo * sintyo));
        return bmi_res;
    }
}

#endif //_BMI_H_