#include <iostream>
using namespace std;
int fib(int n) {
	if (n == 0) return -1;
	if (n == 1) return 0;
	if (n == 2) return 1;
	return fib(n - 1) + fib(n - 2);
}
int main() {
	cout << "Hello, World!" << endl;
	int n;
	cout << "n = "; cin >> n;
	for (int i = 0; i < n; i++)
		cout << "fib(" << i + 1 << ") = " << fib(i + 1) << endl;

	return 0;
}
