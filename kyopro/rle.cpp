//  このように文字列を「何の文字が何個からなる区間か」
//  という情報の列で表現する操作はランレングス圧縮や連長圧縮と呼ばれます。

#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void rle(string s, vector<pair<char, int>> &vec)
{
  int cnt = 1;
  for(int i = 0; i < (int)s.size(); i++){
    if(s[i] != s[i-1]){
      vec.push_back({s[i-1], cnt});
      cnt = 0;
    }
    cnt++;
  }
  vec.push_back({s.back(), cnt});
}
int main(void)
{
  string s, t;  
  cin >> s >> t;
  
  vector<pair<char, int>> svec, tvec;
  rle(s, svec), rle(t, tvec);
  if(svec.size() != tvec.size()){
    cout << "No" << endl;
    return 0;
  }
  bool ans = true;
  for(int i = 0; i < svec.size(); i++){
    if(svec[i].first != tvec[i].first) ans = false;
    if(!(svec[i].second == tvec[i].second || svec[i].second < tvec[i].second && svec[i].second >= 2)) ans = false;
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}