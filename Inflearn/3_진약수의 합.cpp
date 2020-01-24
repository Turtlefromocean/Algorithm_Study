#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int N, sum = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {

		if (i == N) {
			cout << " = " << sum;
		}
		else if (i == 1) {
			cout << i;
			sum += i;
		}
		else if (N % i == 0) {
			cout << " + " << i;
			sum += i;
		}

	}

	return 0;
}