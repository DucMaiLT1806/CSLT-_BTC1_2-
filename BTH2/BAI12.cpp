#include <iostream>
using namespace std;

int main() {
    double km, m, cm;
    cout << "Nhap so km: ";
    cin >> km;
    cout << "So met: " << km *1000 << endl;
    cout << "So xentimet: " << km *100000 << endl;

    double p, h; 
    cout <<"-------------------------" << endl;
    cout << "Nhap so phut: ";cin >> p; 
	cout << "so gio da doi ra : " << p / 60 << endl;

    float C, F; 
    cout<<"--------------------------" << endl;
    cout << "Nhap nhiet do C: ";cin >> C;
	//F = 9 / 5 * C + 32; Sai do dau chia lay phan du nen ket qua sai, phai viet 9.0 / 5.0 hoac 9 / 5.0 de lay ket qua dung
    F = (C * 9/5) + 32;
    cout << "Nhiet do F: " << F << endl;
    return 0;
}