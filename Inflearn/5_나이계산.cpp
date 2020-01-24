#include <cstdio>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//freopen("input.txt", "rt", stdin);
	char a[20];
	int year, age;
	scanf("%s", &a);


	if (a[7] == '1' || a[7] == '2') year = 1900 + (a[0] - '0') * 10 + (a[1] - '0');  // ¶Ç´Â -48
	else year = 2000 + (a[0] - '0') * 10 + (a[1] - '0');

	age = 2019 - year + 1;
	printf("%d ", age);

	if (a[7] == '1' || a[7] == '3') printf("M\n");
	else printf("W\n");
	return 0;
}