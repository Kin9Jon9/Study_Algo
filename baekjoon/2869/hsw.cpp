// 2020.07.06
// 한승우
// 백준@2869

#include <iostream>

using namespace std;

int main(){
  int A,B,V;
  cin >> A;
  cin >> B;
  cin >> V;

  int result = ((V-B) / (A-B));
  if(((V-B) % (A-B)) > 0 ) result ++;

  cout << result << endl;
  
}
