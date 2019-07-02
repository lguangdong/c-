#include<iostream>
using namespace std;
double arr[] = {1,2,3.1,4.0,5};
double& setValues(int i);
int main(){
    setValues(0) = 11.1;
    cout<<arr[0]<<endl;
    return 0;
}
double& setValues(int i){
    return arr[i];
}