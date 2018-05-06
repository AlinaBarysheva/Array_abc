#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	char *arr = new char[n];

	int ca, cb, cc;
	ca = cb = cc = 0;

	for (int i = 0; i < n; ++i) {
		arr[i] = 'a' + rand() % 3;
	}

	int i = 0;
	while (i < n) {
		int j;
		for (j = 0; i + j < n && j < 3 && arr[i + j] == 'a'; ++j) { }
		i += j;
		if (j == 3) ca++;

		for (j = 0; i + j < n && j < 3 && arr[i + j] == 'b'; ++j) { }
		i += j;
		if (j == 3) cb++;

		for (j = 0; i + j < n && j < 3 && arr[i + j] == 'c'; ++j) { }
		i += j;
		if (j == 3) cc++;
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}

	cout << endl << ca << ' ' << cb << ' ' << cc << endl;

	system("pause");
	return 0;

}




