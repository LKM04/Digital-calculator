#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
#include <array>
#include <cmath>
using namespace std;
class Calculator
{
    public:
    Calculator();
    virtual ~Calculator()=default;
    void add();
    void subtract();
    void multiply();
    void divide();
    void sqrt();
    void square();
    void setMem();
    void printMem();
    double input(const string&)const;
    virtual void welcome()const;
    virtual void operation(const string&);
    protected:
    double result;
    double mem;
};
#endif

