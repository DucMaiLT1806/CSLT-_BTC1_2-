#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, P , n , r = 8; 
    cout << "Nhap so tien can gui: ";
    cin >> P; 
    cout << "Nhap so nam can gui:  ";
    cin >> n; 
    A = P * pow(1 + (r / 100), n); 
    cout << "So tien ban nhan duoc: " << fixed << setprecision(0) <<  A << " Va so tien lai la "<< A - P  ;
    // co the ep kieu bang (int) A hoac dung round 
    return 0;
}
