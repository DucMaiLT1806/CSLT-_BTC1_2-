#include <iostream>
using namespace std;


int main() {
	int a, b; 
	cout << "Nhap 2 so nguyen a va b : "; 
	cin >> a >> b;
	cout << "Thuong nguyen : " << a / b << endl; 
	cout << "Phan du : " << a%b <<endl ; 
	; 
	cout << "Thuong thuc :" <<static_cast<double>(a)/b; 
	return 0;
}