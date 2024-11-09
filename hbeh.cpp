#include <iostream>
using namespace std;
int main() {
   int a, b, urjver, hieh, hbeh;
   cin>>a>>b;
   urjver=a*b;
   while(a > 0 and b > 0){
   	if(a>b)a=a %b;
   	else b=b%a;
   }
   hieh=(a+b);
   hbeh= urjver/hieh;
   cout<<hbeh;
   
return 0;	
}
