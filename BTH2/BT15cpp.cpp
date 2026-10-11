#include <iostream>
using namespace std;

void co_bien_tam () {
    int a, b; 
    cout << "nhap 2 so nguyen a va b : " ; 
    cin >> a >> b; 
    int temp; 
    temp = a; 
	a = b; b = temp; 
    cout<< " 2 bien da duoc doi gia tri nhu sau : a = " << a << ", b = " << b;
}


void k_bien_tam() {
	int a, b;
	cout << "nhap 2 so nguyen a va b : ";
	cin >> a >> b;
    a += b; 
    b = a - b; 
    cout << " bien da duoc doi gia tri nhu sau : b= " << b<<endl;
    a = a - b; 
	cout << " bien da duoc doi gia tri nhu sau : a= " << a;

}

void k_bien_tam_XOR()
{
    int a, b; 
    cout << "nhap 2 so nguyen a va b: "; 
    cin >> a >> b; 
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 
	cout << "bein da duoc doi gia tri nhu sau : a = " << a << ", b = " << b;
}
int main () 
{
    //co_bien_tam();
	//k_bien_tam();
    k_bien_tam_XOR();
    return 0;
}