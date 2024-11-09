#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, muu;
	cin >> a >> b >> c >> d;
	muu=a;
	if(b<muu){
		muu=b;
	}
    if(c<muu){
    	muu=c;
	}
    if(d<muu){
    	muu=d;
	}
	 cout<< muu;
	return 0;
}
