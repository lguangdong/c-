#include <iostream>
using namespace std;

static int counts = 10;
void fun();
void fun()
{
    int num = 5;
    num++;
    cout << "num:" << num << "counts:" << counts << endl;
}
int main()
{
    char name[] = "liMing";
    while (counts != 0)
    {
        counts--;
        fun();
    }
    return 0;
}