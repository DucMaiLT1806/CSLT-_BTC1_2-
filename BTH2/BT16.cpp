#include <iostream>
using namespace std;

int main() {
    int h, p, s; 
    cout << " nhap tong so giay: "; 
    cin >> s;
    h = s / 3600; 
	s = s % 3600;
	p = s / 60;
    s = s % 60;
    cout << h <<" Gio "<<p<<" phut " <<s <<" giay ";
    return 0;
}