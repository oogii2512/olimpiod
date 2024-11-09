#include <iostream>
using namespace std;
int main() {
	long long n, s=0, tsifr;
	cin >> n >> tsifr;
	while (n > 0){
		if(tsifr == n % 10){
			s++;
		}
		n = n / 10;
	}
	cout << s;
return 0;
}
     
     
		
	


