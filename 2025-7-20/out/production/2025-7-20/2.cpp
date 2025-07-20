using namespace std;
#include <iostream>

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