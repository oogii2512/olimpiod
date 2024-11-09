#include <iostream>
using namespace std;
    int main() {
    int a, b, c, lag;
    cin >>a >>b >>c;
    lag=a;
    if(b<lag){
    	lag=b;
	}
	if(c>lag){
		lag=c;
	}
	cout<< lag;
		
 return 0;
}
