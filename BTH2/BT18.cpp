#include <iostream>
using namespace std;

int main() {
	int m;
	while (1) {
		cout << "Nhap so tien can rut : ";
		cin >> m;
		cout << "500.000: " << m / 500000 << " to " << endl << "200.000: " << (m % 500000) / 200000 << " to " << endl;
		m = (m % 500000) % 200000;
		cout << "100.000: " << m / 100000 << " to " << endl << "50.000: " << m % 100000 / 50000 << " to " << endl;
		m = m % 100000 % 50000;
		cout << "20.000: " << m / 20000 << " to " << endl << "10.000: " << m % 20000 / 10000 << " to " << endl;
	}
	return 0;
}