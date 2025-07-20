using namespace std;
#include <iostream>
/*当一个字符串的奇数位置（1 -st,3 -rd,5 -th, ...从头开始）字符都是小写英文字母，
 而其偶数位置字符（2 -nd,4 -th,6 -th, ...从头开始）都是大写英文字母时，我们称之为难读字符串。
判断字符串 S 是否难读。*/
int main() {
  string s;
  cin >> s;
  bool flag = true;
  for (int i = 0; i < s.length(); i++) {
    if ((i % 2 !=  0 && s[i] >= 'A' && s[i] <= 'Z') || (i % 2 ==  0 && s[i] >= 'a' && s[i] <= 'z')) {
    } else {
      flag = false;
    }
  }
  if (flag) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
}