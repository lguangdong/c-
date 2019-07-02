#include<iostream>
#include<array>
using namespace std;
double get(int *arr,int size);
int main(){
    int arr[] = {1000,2,3,17,50};
    double avg = get(arr,5);
    double *avgs = NULL;
    avgs  = &avg;
    //cout<<avg<<endl<<&avg<<endl;
    bool result;
    result = *avgs == avg;
    bool result2;
    cout<<*avgs<<endl<<avgs<<endl;
    avgs++;
    cout<<"移动指针后："<<*avgs<<endl<<avgs<<endl;
    return 0;
}
double get(int *arr,int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += arr[i];
    }
    return double(sum)/size;
}