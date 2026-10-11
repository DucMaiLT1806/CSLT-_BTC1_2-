#include <iostream>
using namespace std;

int main() {
    double n , S , VAT  , P , T ,C; 
    cout << "Nhap tong tien an va so nguoi : "; 
    cin >> S >> n; 
    VAT = S * 0.08; 
    P = S * 0.05; 
    T = VAT + P + S ; 
    C = T / n; 
    cout << "VAT: " << VAT << endl;
    cout << "Phi phuc vu: " <<P <<endl ; 
    cout << "Tong thanh toan: " << T << endl; 
    cout << "Moi nguoi tra: " << ceil(C/1000) *1000;
    return 0;

}