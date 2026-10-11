#include <iostream>
using namespace std;

int main() {

    double a, b, c , p ; 
    cout << "Nhap do dai 3 canh a , b , c cua 1 canh tam giac : "; 
    cin >> a >> b >> c;
    cout << "chu vi cua tam giac la: " << a + b + c <<endl; 
    p = (a + b + c) / 2; 
    cout << "Dien tich tam giac duoc tinh bang cong thuc heron la: " << sqrt(p * (p - a) * (p - b) * (p - c)); 
    return 0;
}