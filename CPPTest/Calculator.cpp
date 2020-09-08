// Calculator

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    
    double z = 0.0;
    
    double result = 0.0;
    char oper = '+';
    
    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
 
    bool test = false;
    
    while (true)
    {
        cin  >> x  >> oper  >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << endl;
    }
    return 0;
}

double Calculator::Calculate(double x, char oper, double y)
{
    return 0;
}