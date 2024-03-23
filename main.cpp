#include <iostream>
#include <iomanip>
#include "calculator.h"
#include "scientific.h"
using namespace std;
int main()
{
    Calculator cal;
    Scientific sci;
    Calculator* calptr = &cal;
    bool sciActive = false;
    cout << "Welcome to my Calculator App\n\n"
    << "This calculator has 2 modes, normal and scientific.\n"
    << "You can change it using the 'change' keyword.\n\n"
    << "This app has 2 other special keywords, result and mem.\n"
    << "result stores the result of the previous calculation.\n"
    << "mem allows you to store and access a number.\n"
    << "Both can be used instead of numbers during calculations.\n"
    << "They are both local to the mode you are using.\n";
    calptr->welcome();
    cout<<setprecision(15);
    string input = "";
    while(cin>>input && input != "exit")
    {
	if(input == "change_mode")
	{
	    if(sciActive)
	    {
		calptr = &cal;
		sciActive = false;
		cout << "Simple Calculator activated\n";
	    }
	    else
	    {
		calptr = &sci;
		sciActive = true;
		cout << "Scientific Calculator activated\n";
	    }
	}
	calptr->operation(input);
	calptr->welcome();
    }
    return 0;
}
