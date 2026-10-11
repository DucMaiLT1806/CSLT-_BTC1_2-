#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "nhap chieu dai va chieu rong cua hinh chu nhat : ";
    double d, r; 
    cin >> d >> r; 
    cout << " chu vi va dien tich cua hinh chu nhat la : " << (d + r) * 2 << " va " << d * r;
    return 0;

}