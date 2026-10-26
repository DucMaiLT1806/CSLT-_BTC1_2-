#include <iostream>

using namespace std;


int main() {
	int n; 
	cout << "Nhap so  tien can rut: "; 
	cin >> n; 
	cout << "500.000: " << n / 500000 << " to \n";
	cout << "200.000: " << n % 500000 / 200000 << " to \n";
	cout << "100.000: " << n % 500000 % 200000 / 100000<< " to \n";
	cout << "50.000: " << n % 500000 % 200000 % 100000 / 50000 << " to \n";
	cout << "20.000: " << n % 500000 % 200000 % 100000 % 50000 / 20000 << " to \n";
	cout << "10.000: " << n % 500000 % 200000 % 100000 % 50000 % 20000 / 10000 << " to \n";
	
	return 0;
}