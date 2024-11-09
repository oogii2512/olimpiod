#include <iostream>
using namespace std;
int main(){
    int uliral;
    cin>> uliral;
    switch(uliral){
    case 2:
    case 3:
    case 4:cout<< "Spring"; break;
    case 5:
    case 6:
    case 7:cout << "Summer"; break;
    case 8:
   case 9:
    case 10:cout<<"Autum"; break;
	default: cout<< "winter";	 				
	}
	return 0;
}
