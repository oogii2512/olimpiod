#include <iostream>
using namespace std;

int main() {
int a, b, c, urt, d, e;
cin >> a >> b >> c;
if(a>=b && a>=c){
	urt=a;
	d=b;
	e=c;
}
if(b>=a && b>=c){
	urt=b;
	d=a;
	e=c;
} 
if(c>=a && c>=b){
	urt=c;
	d=a;
	e=b;
}


if(urt*urt ==d*d + e*e){
   cout <<"Right"<<endl;
}else if(urt* urt>d*d+e*e){
	cout<<"Obtuse"<<endl;
}else{
	cout<<"Acute"<<endl;
}
return 0;
}
   
