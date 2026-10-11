#include <iostream>
#include <cmath>
#include <utility>
using namespace std;
   
struct Point {
    double x; 
    double y; 
};
int main() {
    Point A , B; 
    cout << "Nhap toa do diem A : "; 
    cin >> A.x >> A.y; 
    cout << "Nhap toa do diem B : ";
    cin >> B.x >> B.y; 
    double do_dai , trung_diem; 
    do_dai = sqrt(pow(B.x - A.x , 2) + pow(B.y - A.y , 2)); 
    cout << "Do dai doan AB la: "<<do_dai<<endl ;
    
    cout << "Toa do trung diem cua AB la: ("<<(A.x +B.x)/2 <<"," << (A.y+B.y)/2 <<")"<<endl;

    //pair<double, double> C;
    //pair<double, double > D; 
    //cin >> C.first >> C.second; 
    return 0;
}