#include <iostream>
using namespace std;
int main(){
int a,c;
c = 0;
cin>>a;
int b[a];
while(a!=0){
cin>>b[a];
c=c+b[a];
a = a-1;
}
cout<<c;
return 0;
}
