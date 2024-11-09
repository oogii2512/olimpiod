#include <iostream>
using namespace std;
int main() {
    long long n, s=0, tsifr;
    cin >> n;
    while(n > 0){
    s=s*10+n%10;
    n=n/10;
	}
	cout<<s;
return 0;	
}
