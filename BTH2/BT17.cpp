#include <iostream>
using namespace std;

int main() {
    int a, b, c, S , k;
    cout << "nhap so nguyen duong co dung 3 chu so : "; 
    cin >> k; 
    a = k / 100; 
	b = (k / 10) % 10; 
	c = k % 10;
    S = a + b + c;
    cout << "Tram: " << a << " Chuc " << b <<  " Don vi : " << c << endl; 
	cout << "Tong cac chu so : " << S;
    return 0;
}