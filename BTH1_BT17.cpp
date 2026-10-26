#include <iostream>
using namespace std;


int main() {
	int n;
	cout << "Nhap chu so nguyen n dung 3 chu so : "; 
	cin >> n; 
	cout << "Tram: " <<n/100%10 <<" ,Chuc: "<<(n/10)%10 <<" , Don vi: " <<n%10 <<endl;
	cout << "Tong chu so: " <<  n / 100 % 10 + n / 10 % 10 + n % 10; 
	return 0;
}