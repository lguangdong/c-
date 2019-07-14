#include<iostream>
#include<csignal>
#include<unistd.h>
using namespace std;

void signalHandle(int sigNum){
    cout<<"sigNum:"<<sigNum<<endl;

    exit(sigNum);
}

int main(){
    int i = 0;
    signal(SIGINT,signalHandle);
    while(++i){
         cout<<"go to sleep"<<endl;
         if(i >= 3){
             raise(SIGINT);
         }
         sleep(1);
    }
    return 0;
}
