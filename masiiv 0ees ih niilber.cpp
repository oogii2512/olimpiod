#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   int numbers[n];
   for(int i=0; i<n; i++)cin >> numbers[i];
   int sum=0;
   for(int i=0; i<n; i++){
   
     if(numbers [i]>0)
     sum+=numbers[i];
}
  cout << sum << endl;
return 0;
}
