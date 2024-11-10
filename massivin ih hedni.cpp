#include <iostream>
#include  <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
 using namespace std;
 string toString (double);
  int toInt (string);
  double toDouble(string);
   int main(){
   	int n, i, max, s;
   	int a[100];
   	
   	max=0;
   	s=0;
   	cin>>n;
   	for(i=1; i<=n; i++){
   		cin>> a[i];
   		if(a[i]>max){
		   
   		max=a[i];
   		s=1;
   		
	   }else{
	   	if(a[i]==max){
	   		s=s+1;
		   }
	   }
   }
   cout<<max;
   cout<<" ";
   cout<< s << endl;
   return 0;
}
