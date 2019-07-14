#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec;
    int i;
    cout<<"init size:"<<vec.size()<<endl;

    for(i = 0;i<5;i++){
        vec.push_back(i);
    }

    cout<<"extended vec zize:"<<vec.size()<<endl;

    for(i = 0;i<5;i++){
        cout<<"vec["<<i<<"]="<<vec[i]<<endl;
    }

    vector<int>::iterator v = vec.begin();
    while(v != vec.end()){
        cout<<"value is "<<*v<<endl;
        v++;
    }
    return 0;

}