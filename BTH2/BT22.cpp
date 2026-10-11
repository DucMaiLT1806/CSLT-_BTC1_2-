#include <iostream>
using namespace std;

int main() {
    int d; 
    cout << "nhap so ngay (nguyen duong ): "; 
    cin >> d; 
    cout << d / 365 << " nam " << d % 365 / 7 << " tuan " << d % 365 % 7 << " ngay ";
    return 0;
}