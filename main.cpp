#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	int multi[4][3] = {
		{6, 7, 4},
		{8, 10, 2},
		{1, 5, 4},
		{2, 3, 4}
	};
	/*multi[1][0] = 500;
	cout << multi[1][0] << endl;*/

	for (int a = 0; a < 4; a++) {
		for (int s = 0; s < 3; s++) {
			cout << multi[a][s] << endl;
		}
	}

	return 0;
}