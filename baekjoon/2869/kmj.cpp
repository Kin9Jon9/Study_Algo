#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int A,B,V;
	int result = 0;
	cin >> A >> B >> V;
	
	result = ( (V - A) / (A - B) );
	if ( (V - A) % (A - B) != 0) result++;
	
	cout << ++result << endl;
}