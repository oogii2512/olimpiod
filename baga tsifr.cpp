#include <iostream>
using namespace std;
int main() {
	long long n, s=0, tsifr=9;
	cin >> n;
	while(n > 0){
	if(tsifr > n % 10)
	tsifr=n % 10;	
	}
	n=n / 10;
	cout << tsifr;
return 0;	
}
