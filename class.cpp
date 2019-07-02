#include <iostream>
using namespace std;
class Box
{
public:
    double width;
    double height;
    double length;

    double getResult(void);
    void setWid(double wid);
    void setHei(double height);
    void setLen(double length);
private:
    //double width;
};
class smallBox:Box{
    public:
        void setWid(double wid);
        double getWid(void);
};
void smallBox::setWid(double wid){
    width = wid;
}
double smallBox::getWid(void){
    return width;
}
double Box::getResult(void){
    return width*height*length;
}
void Box::setWid(double wid){
    width = wid;
}
void Box::setLen(double len){
    length = len;
}
void Box::setHei(double hei){
    height = hei;
}


class Line{
    public:
        void set(double len);
        double get(void);
        Line(double len,double anum);//构造函数
    private:
        double length;
        double num;
};
Line::Line(double len,double anum):length(len),num(anum){
    // length = len;
    // num = anum;
    cout<<"this is construct"<<endl;
}
void Line::set(double len){
    length = len;
}
double Line::get(void){
    return num;
}
int main(){
    Box box1;
    box1.height = 11;
    box1.width = 11;
    box1.length = 11;
    double result = box1.length*box1.height*box1.width;
    cout<<result<<endl;
    cout<<"++++++++++"<<endl;
    Box box2;
    box2.setHei(7.7);
    box2.setLen(7.7);
    box2.setWid(7.7);
    cout<<box2.getResult()<<endl;
    cout<<"++++++++++"<<endl;
    smallBox smallBox1;
    smallBox1.setWid(11.1);
    cout<<smallBox1.getWid()<<endl;
    cout<<"----------"<<endl;
    Line line(22.2,10);
    //line.set(12.2);
    cout<<line.get()<<endl;
    return 0;
}