#include<iostream>
#include<cmath>
using namespace std;
int counts;
extern void write_extern();
int main(){
    counts  = 10;
    write_extern();
    abs(11.2);
}