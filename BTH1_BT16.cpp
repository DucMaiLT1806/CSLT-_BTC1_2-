#include <iostream>
using namespace std;


int main() {
	int s;
	cout << "Nhap so giay: "; 
	cin >> s; 
	cout << s / 3600 << " gio " << (s % 3600) / 60 << " phut " << ((s % 3600) % 60) << " giay "; 
	return 0;
}