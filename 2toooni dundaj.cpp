#include <bits/stdc++.h>
using namespace std;
int main(){
	double a, b, arif, geo;
	cin >> a >> b;
	
	arif=(a+b)/2;
	geo=sqrt(a*b);
	printf("%. 2f%.2f", arif, geo);
	 return 0;
}
