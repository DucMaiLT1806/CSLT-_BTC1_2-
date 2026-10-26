#include <iostream>
#include <string>
using namespace std;


int main() {
	string hoTen = "Mai Minh Duc";
	int tuoi=18; 
	double chieuCao=1.75; 
	char gioiTinhs; cout << "nhap gioi tinh: "; cin >> gioiTinhs; 
	bool laSinhVien = true;
	cout << "Gia tri bien String:" <<hoTen<<endl ;
	cout << "Gia tri bien int:"<<tuoi<<endl;
	cout << "Gia tri bien double:"<<chieuCao <<endl;
	cout << "Gia tri bien char:"<<gioiTinhs <<endl;
	cout << "Gia tri bien bool:" << laSinhVien << endl;
	cout << "====================================" << endl;
	tuoi += 1; 
	chieuCao += 0.5; 
	cout << "Tuoi: " << tuoi << endl; 
	cout << "Chieu cao: " << chieuCao << endl; 
	return 0;

}