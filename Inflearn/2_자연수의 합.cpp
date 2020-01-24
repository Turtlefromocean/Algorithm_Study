#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int A, B, sum = 0;

	cin >> A >> B;

	for (int i = A; i <= B; i++) {
		if (i != B) {
			cout << i << " + ";
		}
		else {
			cout << i << " = ";
		}
		sum += i;
	}

	cout << sum;

	return 0;
}