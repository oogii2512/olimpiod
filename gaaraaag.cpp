#include <iostream>
using namespace std;
int main(){
    int garag;
	cin>>garag;
	switch (garag){
		case 1 : cout << "Monday"; break;
		case 2 : cout << "Tuesday"; break;
		case 3 : cout << "wednesday"; break;
		case 4 : cout << "Thursday"; break;
		case 5 : cout << "Friday"; break;
		case 6 : cout << "Saturday"; break;
		default : cout << "Sunday";
	}
}
