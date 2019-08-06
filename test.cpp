#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
void sayHello(ostream any_out_stream);
int pluss(int a,int b){
    cout << "普通函数掉调用" <<endl;
    return a + b;
};
template <class T>
int pluss(T a,T b){
    cout << "泛型函数调用" <<endl;
    return a + b;
};
int main(){
    ofstream fout;
    char input[] = "hello word!";
    string input2 = "hello word";
    fout.open("test.txt");
    if(fout.fail()){
        cout<<"open file failed!";
        return 0;
    }
    char next;
    fout.put(*input);
    //sayHello(fout);
    fout.close();
    //ostream.put(input);
    char a = toupper('a');
    cout << toupper('a') <<endl;
    cout << a <<endl;
    cout << static_cast<char>(toupper('b')) <<endl;


    //=====array=======
    int score[5] = {1,2,3,4};
    int c = 10,d = 20;
    pluss(c,d);
    pluss<int>(c,d);
    char name[] = "helloword";
    cout << name<<endl;

    char myClass[5] = "haha";
    strncpy(myClass,"helloword!!",5);
    strcpy(myClass,"helloword");
    cout << myClass << strlen(myClass)<<endl;
    cout << strlen(myClass) << endl;
    cout << strcmp(myClass,"hello") <<endl;
    return 0;
}

void sayHello(ostream& any_out_stream){
    any_out_stream << "hello";
}