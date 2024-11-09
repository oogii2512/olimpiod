#include <iostream>
using namespace std;

int main() {
	int second, h, m, s;
	cin >> h >> m >> s;
	second = h * 3600 + m * 60 + s;
	cout << second;

	return 0;
}
