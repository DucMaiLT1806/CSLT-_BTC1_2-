#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 2;
    cout << a / b << " " << a % b << endl; //a chia b lay phan nguyen va phan du 
    cout << (double)a / b << endl; //ep kieu sang so truc cua a  chia b 
    int m = 3;
    int p = m++ * 2; // m van bang 3 * 2 = 6 , sau do m tang len 4
    int q = --m + 5; // m giam 1 truoc khi tinh toan , m =3 + 5 = 8
    cout << p << " " << q << " " << m << endl;
    return 0;
}