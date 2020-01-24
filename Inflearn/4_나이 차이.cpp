#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int N, min = 200, max = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		int age;
		cin >> age;

		if (age < min) min = age;
		if (age > max) max = age;
	}

	cout << max - min;

	return 0;
}