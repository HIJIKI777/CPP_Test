#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    map<string,int>student_score;
    student_score = {{"nishikubo",100}, {"aitsu",1000},{"omae",1}};
    student_score["kare"] = 900;
    cout << student_score.size() << endl;
    cout << student_score.at("kare") << endl;

    for_each(student_score.begin(),student_score.end(),[](pair<string,int>i){
        cout << i.first << " " << i.second << endl;
    });

    //autoって便利やな
    auto itr = student_score.find("kare");
    student_score.erase(itr);

    for_each(student_score.begin(),student_score.end(),[](pair<string,int>i){
        cout << i.first << " " << i.second << endl;
    });

    return 0;
}