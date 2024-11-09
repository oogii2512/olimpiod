#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin>>a >>b;
  while(a>0 and b>0){
  	if(a>b){
  		cout<<b<<" "<<a/b<<endl;
  		a=a%b;
	  }else{
	  cout<< a << " "<<b/a<<endl;
	  b=b%a;
    }
  }
  return 0;
}

   
