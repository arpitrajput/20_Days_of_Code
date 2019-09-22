#include <iostream>
#include <cmath> 

using namespace std;

int main() {
 int t;
 cin>>t;
 
 while(t--)
 {
  int num;
  cin>>num;
  double x = sqrt(num);
  if (x - round(x) == 0) cout<<1<<endl;
  else cout<<0<<endl;
 }
 
 return 0;
}
