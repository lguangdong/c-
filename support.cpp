#include <iostream>
using namespace std;
//extern int counts;
// void write_extern()
// {
//     cout << "counts is "<<counts << endl;
// }
int main(){
    int i;
    int *a;
    int &b = i;
    i = 10;
    a = &b;
    cout<<*a<<endl;
    return 0;
}