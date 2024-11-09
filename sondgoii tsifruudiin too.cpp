#include <iostream>
using namespace std;
int main() {
	long long n, s=0, tsifr;
	cin >> n;
	while (n>0){
	tsifr = n % 10;
	if ( tsifr % 2 ==1){
		s++;
	}
	n = n/ 10;	
	}
    cout<< s;
return 0;
}
     
     
		
	


