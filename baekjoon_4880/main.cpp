#include <iostream>
using namespace std;

int n[3], a, b;
int main() {
	while (1) {
		for (int i = 0; i < 3; i++) cin>>n[i];
		if (!n[0] && !n[1] && !n[2]) break;
		a = n[2] - n[1];
		b = n[1] - n[0];
		if (a == b) cout << "AP " << b + n[2] << endl;
		else cout << "GP " << n[2] + a*a/b << endl;
	}
	return 0;
}