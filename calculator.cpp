#include <iostream>
#include "calculator.h"
using namespace std;

Calculator :: Calculator() : result(0.0),mem(0.0){}
void Calculator :: add()
{
    string a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = input(a) + input(b);
    cout << "Result is " << result << endl;
}
void Calculator :: subtract()
{
    string a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = input(a) - input(b);
    cout << "Result is " << result << endl;
}
void Calculator :: multiply()
{
    string a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = input(a) * input(b);
    cout << "Result is " << result << endl;
}
void Calculator :: divide()
{
    string a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = input(a) / input(b);
    cout << "Result is " << result << endl;
}
void Calculator :: square()
{
    string a;
    cout << "Enter the first number: ";
    cin >> a;
    result = input(a) * input(a);
    cout << "Result is " << result << endl;
}
void Calculator :: sqrt()
{
    string a;
    cout << "Enter the first number: ";
    cin >> a;
    result = std::sqrt(input(a));
    cout << "Result is " << result << endl;
}
void Calculator :: setMem()
{
    string a;
    cout << "Enter the first number: ";
    cin >> a;
    mem = input(a);
    cout << "Result is " << mem << endl;
}
void Calculator :: printMem()
{
    cout << "The mem is  "<<mem;
}




double Calculator :: input(const string &input)const
{
    if(input == "result")
    {
	return result;
    }
    else if(input == "mem")
    {
	return mem;
    }
    else
    {
	return stod(input);
    }
}
void Calculator::welcome() const
{
    std::cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change_mode, setmem, printmem) or exit\n";
}

void Calculator::operation(const string& input)
{
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply();
    }
    else if (input == "sqrt")
    {
        sqrt();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
}

