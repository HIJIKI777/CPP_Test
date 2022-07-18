#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a,b,d;
    cin >> a >> b >> d;

    double resx = 0.0;
    double resy = 0.0;
    double rad = 0.0;
    double pi = 3.141592653589793238;

    rad = d * pi / 180;

    resx = a * cos(rad) - b * sin(rad);
    resy = a * sin(rad) + b * cos(rad);

    cout << resx << " " << resy << endl;


    return 0;
}