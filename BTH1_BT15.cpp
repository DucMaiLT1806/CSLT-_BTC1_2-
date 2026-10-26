#include <iostream>
using namespace std;


int main() {
	int a, b, temp; 
	cout << "Nhap 2 so nguyen a va b : "; 
	cin >> a >> b; 
	temp = a; 
	a = b; 
	b = temp; 
	cout << "2 bien a va b da duoc hoan doi cho nhau : " << a <<" " << b << endl;
	cout << "Khong dung bien tam "<<endl; 
	int a1, b1, temp1; 
	cout << "Nhap 2 so nguyen a va b : "; 
	cin >> a1 >> b1; 
	b1 = (a1 + b1) ; 
	a1 = b1 - a1; 
	b1 = b1 - a1;
	cout << "2 bien da duoc doi la : "<<a1<<" " << b1;
	return 0; 
}}