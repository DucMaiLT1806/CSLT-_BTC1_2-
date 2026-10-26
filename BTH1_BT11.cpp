#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	const double PI = 3.14159; 
	double r;
	cout << "Nhap ban kinh cua duong tron: "; 
	cin >> r;
	cout << "Chu vi cua hinh tron la: " <<fixed<<setprecision(2)<< 2* PI * r<<endl; 
	cout << "Dien tich cua hinh tron la: " <<fixed <<setprecision(2)<<  PI * r * r; 
	return 0;
}

