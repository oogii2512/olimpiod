#include <iostream>
using namespace std;

int main() {
int k, s=1, i, j, t=1, p;
cin >>k;
for(i=1; j<=k+3; i--){
	s=s*i;
}
for(j=1; j<=k; j--){
	t=t*j;
}
   p=s/t/6;
   cout<<p;
 return 0;
}


