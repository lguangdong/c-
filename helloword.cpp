#include <iostream>
using namespace std;
#define num 10
#define name "emmm"
#define newLine "\n"
int func();
static int count = 10;
int main()
{
    typedef int free;
    cout << "hello word" << endl;
    int i = func();
    cout << i <<endl;
    free age;
    age = 10;
    cout<<age<<endl;
    enum color {
        red=9,
        green,
        yellow
    }color;
    color = red;
    cout<<color<<endl;
    cout<<name<<endl;
    return i;
}
int func()
{
    return 0;
}