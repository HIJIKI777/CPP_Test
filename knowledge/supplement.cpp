#include<iostream>

using namespace std;

class c1{               //継承元(基底クラス)
    public:
        int ci = 1000;
    public:
        void c_print(int c){
            printf("Printing...");
            cout << c << endl;
        }
};

class c2 : public c1{   //継承先(派生クラス)
    public:
        int ci2 = 2000;
    public:
        void new_c_print(int c2){
            printf("New Printing...");
            cout << c2 << endl;
        }
};

inline int add(int a, int b){       //inlineは高速化できるけどファイルサイズ大きくなったりするよ
    return a+b;
}

int main(){

    //do whileとcontinue,?:
    int i = 0;
    int a1 = 1235876;
    int b1 = 9284757;
    do{
        cout << i << " ";
        i++;
    }while(i < 5);
    printf("\n");

    for(int j = 0;j < 10; j++){
        cout << j << endl;
        if(j == 3 || j == 7){
            continue;           //j = 3,7のときは以降の処理をガン無視
        }
        j <= 7 ? printf("under 7\n") : printf("upper 7\n");
        //(条件) ? (trueで出るやつ) : (falseで出るやつ)
        cout << add(a1,b1) << endl;
    }

    c2 c2_class;
    c2_class.new_c_print(c2_class.ci);
    c2_class.c_print(c2_class.ci2);


    return 0;
}