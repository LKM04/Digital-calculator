#include <iostream>
#include "scientific.h"
using namespace std;

Scientific::Scientific() : Calculator() {}

void Scientific::welcome() const
{
    cout << "\n\nEnter one of:\n"
    << "+, -, /, *, sqrt, square, change_mod, setmem, printmem, sin, cos, log, tan, ln, abs, pow\n"
    << "or exit\n";
}

void Scientific:: operation(const std::string& input)
{
    Calculator::operation(input);

    if (input == "sin")
    {
        sin();
    }
    else if (input == "cos")
    {
        cos();
    }
    else if (input == "tan")
    {
        cos();
    }
    else if (input == "ln")
    {
        ln();
    }
    else if (input == "log")
    {
        log();
    }
    else if (input == "abs")
    {
        abs();
    }
    else if (input == "pow")
    {
        pow();
    }
}
void Scientific::sin()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::sin(input(a));
    cout << "The result is " << result;
}
void Scientific::cos()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::cos(input(a));
    cout << "The result is " << result;
}
void Scientific::tan()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::tan(input(a));
    cout << "The result is " << result;
}
void Scientific::ln()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::log(input(a));
    cout << "The result is " << result;
}
void Scientific::log()
{
    string a, b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    result = std::log(input(b))/std::log(input(a));
    cout << "The result is " << result;
}
void Scientific::abs()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::abs(input(a));
    cout << "The result is " << result;
}
void Scientific::pow()
{
    string a, b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the exponent: ";
    cin >> b;
    result = std::pow(input(a), input(b));
    cout << "The result is " << result;
}


