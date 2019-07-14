#include<iostream>
#include<cstring>
//using namespace std;
using std::cout;
using std::endl;
using std::string;
#define PI 3.1415
class Box {
    public:
        Box();
        ~Box();
};
Box::Box(){
    cout<<"构造函数"<<endl;
}
Box::~Box(){
    cout<<"析构函数"<<endl;
}
namespace firstNameSpace{
    void Fun(){
        cout<<"first namespace"<<endl;
    }
    namespace secondNameSpace{
        void Fun(){
            cout<<"second namespace"<<endl;
        }
    }
}
using namespace firstNameSpace;
int main(){
    string name;
    name = "li";
    string* a = NULL;//a是初始化为空的指针
    a = new string;//为变量a分配堆内存
    *a = "nihao";
    cout<<"name is "<<*a<<endl;
    delete a;
    Box* myBoxArr = new Box[4];
    delete [] myBoxArr;

    Fun();

    cout<<__LINE__<<endl;
    cout<<__FILE__<<endl;
    cout<<__DATE__<<endl;
    cout<<__TIME__<<endl;
    return 0;


}