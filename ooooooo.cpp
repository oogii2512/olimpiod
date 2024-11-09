#include <iostream>
using namespace std;
int main(){
	int tsag, h, ts;
	cin>> tsag;
	h=tsag/24;
	ts=tsag-h*24;
	cout<<h<<" "<<ts;
	return 0;
}
