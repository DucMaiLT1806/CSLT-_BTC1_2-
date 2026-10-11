#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double kg, h, BMI ; 
    cout << "Nhap chieu cao va can nang cua ban: "; 
    cin >> h >> kg; 
    h /= 100; 
    BMI = kg / (h * h) ; 
    cout << "Chi so BMI cua ban la " << fixed << setprecision(1) << BMI;

    return 0;
}