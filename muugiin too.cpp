#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int numbers[n];
    int sum=0;
    for (int i=0; i<n; i++){
    	cin >> numbers[i];
    	if(numbers[i]<60)
    	sum++;
	}
	cout<< sum << endl;
return 0;
}
