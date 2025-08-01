using namespace std;
#include <iostream>
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ans = n/100;
    if(n%100 != 0){
        ans+=1;
    }
    cout << ans << endl;
}