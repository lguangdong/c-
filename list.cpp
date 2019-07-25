#include<iostream>
#include<list>
#include<string>
using namespace std;
void printit(string& string);
bool compare(int& num);
int main(){
    list<int> Mlist;
    Mlist.push_back(1);
    Mlist.push_back(3);
    Mlist.push_back(4);
    Mlist.push_back(6);
    Mlist.push_back(10);

    list<string> Alist;
    Alist.push_front("hello");
    Alist.push_back("word");
    Alist.push_back("!");

    list<string>::iterator Miterator;
    for(Miterator = Alist.begin();Miterator!= Alist.end();Miterator++){
        cout<<*Miterator<<endl;
    }
    cout<<"--------------"<<endl;
    for_each(Alist.begin(),Alist.end(),printit);
    cout<<"--------------"<<endl;

    int Mcount;
    Mcount = count(Mlist.begin(),Mlist.end(),4);
    cout<<Mcount<<endl;
    //Ocount = count_if(Mlist.begin(),Mlist.end(),compare());
    return 0;


}

void printit(string& string){
    cout<<string<<endl;
}
bool compare(int& num){
    return num > 3;
}