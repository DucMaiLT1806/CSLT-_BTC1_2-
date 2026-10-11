#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b; 
    cout << "nhap 2 so nguyen a va b: "; cin >> a >> b; 
    cout << "phan thuong nguyen: " << a / b<<endl;    
	cout << "phan du: " << a % b << endl; 
    cout << "thuong thuc: " << fixed << setprecision(2) << static_cast<double>(a) /b << endl;

    return 0;
}