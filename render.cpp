#include <iostream>
using namespace std;
void swap(int &a, int &b);
int main()
{
    int a = 100, b = 200;
    
    cout << "before:" << a << " " << b << endl;
    swap(a, b);
    cout << "after:" << a << " " << b << endl;
    int &c = a;
    c = 101;
    cout << "c=" << c << endl;
    return 0;
}
void swap(int &a, int &b)
{
    int tem;
    tem = a;
    a = b;
    b = tem;
}