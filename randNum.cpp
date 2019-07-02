#include<iostream>
#include<ctime>
#include<cmath>
const int MAX = 10;
using namespace std;
int *get(){
    static int arr[MAX];
    // 设置种子
    srand( (unsigned)time( NULL ) );
    for(int i = 0;i<MAX;i++){
        arr[i] = rand();
    }
    return arr;
}
int main(){
    int i,j;
    int *ptr = NULL;
    ptr = get();
    for(int i= 0;i<MAX;i++){
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}