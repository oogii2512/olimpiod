#include<iostream>
using namespace std;
main()
{
int n, i, s=0, k=2;
cin>>n;
for(i=1; i<=n; i++)
{
s=s+i*k;
k++;
}
cout<<s;
}
