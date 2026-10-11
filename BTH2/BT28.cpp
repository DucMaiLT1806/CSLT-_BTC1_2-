#include <iostream>
using namespace std;

int main() {
    cout<<"char " <<sizeof(char)<<endl;
    cout<<"bool "<< sizeof(bool)<<endl;
    cout << "short " << sizeof(short)<<endl;
    cout << "int " << sizeof(int)<<endl;
    cout << "long long " << sizeof(long long)<<endl; 
    cout << "floa t" << sizeof(float)<<endl; 
    cout << "double " << sizeof(double)<<endl; 
    int x = 2147483647; cout << x+1 << endl; 
    long long y = 2147483647; cout << y + 1; 
    return 0;
}