#include <iostream>
using namespace std;


int main() {
	int a = 7, b = 2;
	cout << a / b << " " << a % b << endl; // chia bang 3 du 1 
	cout << (double)a / b << endl;
	int m = 3;
	int p = m++ * 2; //3 * 2
	int q = --m + 5; // 3 + 5
	cout << p << " " << q << " " << m << endl;
	return 0; 
}