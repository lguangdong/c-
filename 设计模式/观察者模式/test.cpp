#include <iostream>
#include <list>
using namespace std;

//被观察者
class Subject
{
    list<Observer *> Olist;
    int state;

public:
    Subject(int curState){
        state = curState;
    }
    //注册
    void attack(Observer *observer)
    {
        Olist.push_back(observer);
    }
    //销毁
    void remove(Observer *observer)
    {
        Olist.remove(observer);
    }
    //通知
    void notifyAllObserver()
    {
        list<Observer *>::iterator Oiterator;
        for (Oiterator = Olist.begin(); Oiterator != Olist.end; Oiterator++)
        {
            (*Oiterator)->update();
        }
    }
    //改变状态
    void setState(int curState)
    {
        state = curState;
        notifyAllObserver();
    }
    //得到状态
    int getState()
    {
        return state;
    }
};

//观察者的抽象类
class Observer
{
protected:
    Subject* subject;

public:
    virtual void update() = 0;
};
//具体的观察者A
class Aobserver : public Observer
{
    Aobserver(Subject *subject)
    {
        this->subject = subject;
    }

public:
    virtual void update()
    {
        cout << "得到状态改变通知，现在的状态是" << this->subject->getState() << endl;
    }
};
//具体的观察者B
class Bobserver : public Observer
{
    Bobserver(Subject *subject)
    {
        this->subject = subject;
    }

public:
    virtual void update()
    {
        cout << "得到状态改变通知，现在的状态是" << this->subject->getState() << endl;
    }
};

int main(){
    Subject *subject = new Subject(0);
    Aobserver *a = new Aobserver(subject);
    Bobserver *b = new Bobserver(subject);
    subject->setState(1);
}
