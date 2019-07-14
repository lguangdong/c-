#include<iostream>
#include<cstring>
using namespace std;


int main(){
    string name;
    name = "li";
    string* a = NULL;//a是初始化为空的指针
    a = new string;//为变量a分配堆内存
    *a = "nihao";
    cout<<"name is "<<*a<<endl;

    delete a;
    return 0;


}