#include <iostream>

using namespace std;

int main(){
  int max;
  cin >> max;
  int data[30], result[30], i = 0;
  while(i < max){
    cin >> data[i++];
  }
  i = 0;
  while( i < max ){
    long start = 0;
    for(int n = data[i]; n >0; n--){
      start = 2*(0.5 + start);
    }
    result[i++] = start;
  }
  i = 0;
  while(i < max){
    cout << result[i++] << endl;
  }
  return 0;
}