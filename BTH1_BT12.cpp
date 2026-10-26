#include <iostream>
#include <cmath>
using namespace std;


int main() {
	double h , m ;
	int km, cm , C ;
	cout << "cau a" << endl; 
	cout << "Nhap so km: ";
	cin >> km; 
	cout << "Doi ra met = " << km * 1000<<endl; 
	cout << "============================\n"<<"cau b \n";
	cout << "Nhap so phut: ";
	cin >> m ; h = m / 60;
	cout << "Doi ra gio: " <<h<<endl; 
	cout << "===============================\n" << "cau c\n"; 
	cout << "Nhap do C: "; 
	cin >> C; 
	cout << "Doi sang do F: " << ((9 / 5) * C) + 32; 
	return 0;
}