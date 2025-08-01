#include <iostream>
//
// Created by 20538 on 2025/8/1.
//
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n,k;
  cin >> n >> k;
  while (k-- > 0) {
    if (n%200 == 0) {
      n/=200;
    }else {
      n*=1000;
      n+=200;
    }
  }
  cout << n << endl;
}