#include <iostream>
#include <string>
using namespace std;

int main() {
    string mh; 
    int sl, dg; 
    cout << "Nhap ten mat hang : "<<endl; 
    getline(cin, mh); 
    cout << "Nhap so luong va don gia: "<<endl ; 
    cin >> sl >> dg; 
    cout << "-----------------------------------" << endl;
    cout << "|\t Hoa don cua ban   \t  |" << endl;
    cout << "-----------------------------------" << endl; 
    cout << "|Ten hang: " << "\t" << mh << "\t         |" << endl;
    cout << "|So luong: \t" << sl <<"\t         |" << endl;
    cout << "|Don gia: " << "\t" << dg << "\t         |" << endl;
    cout << "|Thanh tien: " << "\t" << dg * sl << "\t        |" << endl;
    cout << "|Thue VAT la 8% " <<"\t" << "\t  |" << endl;
    double tong = dg * sl * ( 1 + 0.08 ) ; 
    cout << "|Tong tien phai tra =  " << "\t" << tong << "\t  |" << endl;
    cout << "-----------------------------------"; 


    return 0;
}