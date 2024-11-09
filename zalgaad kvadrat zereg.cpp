#include <iostream>
using namespace std;

int main() {
 long long a, ans, oron=1, b;
 cin>>a;
 b=a;
 while(a>0){
 	oron=oron*10;
 	a=a/10;
 }
 a=b;
 a = a + oron;
 a = a * 10 + 1;
 ans = a * a;
 cout << ans;
 return 0;
}

   
