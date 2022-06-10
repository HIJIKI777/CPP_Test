#include <iostream>
#include "car.h"

using namespace std;

CCar::CCar() : m_fuel(0),m_migration(0){
    cout << "CCarオブジェクト生成" << endl;
}

CCar::~CCar(){
    cout << "CCarオブジェクト破棄" << endl;
}

void CCar::move(){
    if(m_fuel >= 0){
        m_migration++;
        m_fuel--;
    }
    cout << "移動距離" << m_migration << endl;
    cout << "燃料" << m_fuel << endl;
}

void CCar::supply(int fuel){
    if(fuel > 0){
        m_fuel += fuel;
    }
    cout << "燃料" << m_fuel << endl;
}