#include <iostream>
#include <string>
using namespace std;

int main() {
	string hoTen = "Mai Duc"; cout << "bien hoTen: " << hoTen << endl;
	int tuoi = 18; cout << "bien tuoi: " << tuoi << endl;
	double chieuCao = 175 ; cout << "bien chieuCao: " << chieuCao << endl;
	char gioiTinh = 'M' ; cout << "bien gioiTinh: " << gioiTinh << endl;
	bool laSinhVien = 1; cout<<boolalpha;/*Dong lenh dung de hien thi chu true false trong code */ cout << "bien laSinhVien: " << laSinhVien << endl;
	cout << "sau khi thay doi gia tri cau cac bien "; 
	tuoi += 1; cout << "bien tuoi: " << tuoi << endl;
	chieuCao *= 1.1; cout << "bien chieuCao: " << chieuCao << endl;

    return 0;
}