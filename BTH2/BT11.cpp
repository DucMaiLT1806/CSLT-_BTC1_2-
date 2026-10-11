#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const double PI = 3.14159;
	double r , S , V;
	cout << "Nhap ban kinh cua hinh tron : ";cin >> r; 
	S = PI * r * r; 
	V = PI * r *2;
	cout << "Chu vi va dien tich cua hinh tron la: " <<fixed << setprecision(2) << V<<endl;
	
	cout << "Dien tich cua hinh tron la: " << fixed <<setprecision(2) << S ; 
    return 0;
}