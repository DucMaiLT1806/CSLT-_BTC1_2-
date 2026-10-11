#include <iostream>
using namespace std;

int main() {
    int n, y; 
    cout << "Nhap so nguyen n: "; cin >> n;
    cout << "Nhap so nam y: "; cin >> y; 
    cout << "n co phai so chan chia het cho ca 3 va 5 :  "<<boolalpha << (n % 2 == 0 && n % 3 == 0 && n % 5 == 0) << endl;
    cout << "y co phai la nam nhuan :  " << boolalpha << (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);

    return 0;
}