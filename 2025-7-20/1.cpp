using namespace std;
#include <iostream>
/*高桥正在玩一个游戏。
在这个游戏中，每当你收集到的硬币数是 100 的倍数时，你就会得到一份奖品。
高桥目前已经收集了 X 枚硬币。他还需要收集多少个硬币才能得到下一个奖品？(如果 X 是 100 的倍数，
我们假设他总共收集了 X 个硬币，已经得到了奖品）。*/
int main() {
  int n;
  cin >> n;
  if (n % 100 == 0) {
    cout << 100 << endl;
  } else {
    int m = n % 100;
    cout << 100 - m << endl;
  }
}