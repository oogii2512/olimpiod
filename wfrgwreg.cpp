#include <iostream>
using namespace std;

int main() {
    int a, s=1;
    cin >> a;
    for(int i=1; i<=a; i++){
    	s=s*i;
	}
	cout << s;
	return 0;
}
