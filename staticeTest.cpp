#include<iostream>
using namespace std;

int counts  = 10;
void fun();
void fun(){
    static int num = 5;
    num++;
    cout<<"num:"<<num<<endl;
    cout<<"count:"<<counts<<endl;
}
int main(){
    char name[] = "liMing";
    while (counts != 0)
    {
        counts--;
        fun();
    }
    return 0;
}