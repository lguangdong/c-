#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t now = time(NULL);
    char *dt = ctime(&now);
    cout << "now time:" << dt << endl;
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "utc:" << dt << endl;
    cout << "秒数：" << now << endl;
    tm *ltm = localtime(&now);
    cout<<"year:" << ltm->tm_year <<endl<< "month:" << ltm->tm_mon <<endl<< "day:" << ltm->tm_mday<<endl;
    return 0;
}
