#include <iostream>
#include <math.h>
using namespace std;
int main (){
int n, a[100],m=0,i;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
m=a[1];
for(i=1; i<=n; i++){

if(a[i]>m) m=a[i];
}
cout<<m<<endl;
return 0;
}
