#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int L,W,R,B;
  int sum, multi;
  cin >> R >> B;
  sum = (R + 4)/2;
  multi = ( B - 4 ) + (2 * sum);
  L = -(-sum + (sqrt(sum*sum-4*multi)))/2;;
  W = -(-sum - (sqrt(sum*sum-4*multi)))/2;
  cout << W << " " << L << endl;
}