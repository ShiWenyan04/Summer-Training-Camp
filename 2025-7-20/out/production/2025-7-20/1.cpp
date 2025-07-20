using namespace std;
#include <iostream>

int main(){
     int n;
     cin>>n;
     if(n%100 == 0){
          cout<<100<<endl;
     }else{
          int m = n%100;
          cout << 100-m << endl;
     }
}