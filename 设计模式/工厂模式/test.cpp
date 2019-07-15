#include <iostream>
using namespace std;

class Operation
{
protected:
    double num1;

protected:
    double num2;

public:
    void setNum1(int num)
    {
        num1 = num;
    }
    void setNum2(int num)
    {
        num2 = num;
    }
    double getNum1()
    {
        return num1;
    }
    double getNum2()
    {
        return num2;
    }
    virtual double getResult()
    {
        double result = 0;
        return result;
    }
};

class operationAdd : public Operation
{
public:
    double getResult()
    {
        double result = num1 + num2;
        return result;
    }
};

class operationSub : public Operation
{
public:
    double getResult()
    {
        double result = num1 + num2;
        return result;
    }
};

class operationMul : public Operation
{
public:
    double getResult()
    {
        double result = num1 * num2;
        return result;
    }
};

class operationDiv : public Operation
{
public:
    double getResult()
    {
        double result = num1 / num2;
        return result;
    }
};

class operationFactory
{
public:
    Operation *creatorOperation(char type)
    {
        Operation *oper = NULL;
        switch (type)
        {
        case '+':
            oper = new operationAdd;
            break;
        case '-':
            oper = new operationSub;
            break;
        case '*':
            oper = new operationMul;
            break;
        case '/':
            oper = new operationDiv;
            break;
        }
        return oper;
    }
};

int main(){
    Operation* oper = NULL;
    operationFactory of;
    oper = of.creatorOperation('*');
    oper->setNum1(11);
    oper->setNum2(22);
    double result = oper->getResult();
    cout<<result<<endl;
    if(oper != NULL){
        delete oper;
        oper = NULL; 
    }
    return 0;
}