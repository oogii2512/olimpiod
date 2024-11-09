#include <iostream>
using namespace std;

int main() {
	int a,n,c=1;
scanf("%d%d",&a,&n);
for(int i=1; i<=n; i++){
for(int b=0; b<i; b++){
c*=a;
}
printf("%d^%d=%d\n", a, i, c);
c=1;
}

	

	return 0;
}
