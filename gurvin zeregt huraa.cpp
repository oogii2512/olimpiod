#include <iostream>
using namespace std;
int main() {
   int n;
   cin>> n;
   while(n % 3 == 0){
   	n = n /3;
   }
   cout<< n;
return 0;	
}
