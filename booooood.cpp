#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, s=0;
	cin >> a >> b >> c >> d;
	if(a % 3==0){
		s++;
	}
	if(b % 3==0){
		s++;
	}
	if(c % 3==0){
		s++;
	}
	if(d % 3==0){
		s++;
	}
	cout<< s;
	return 0;
}
