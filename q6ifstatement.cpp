// q6 (switch)
#include<iostream>
using namespace std;


int main(){
    char op;
    int x,y;
    cout << "enter the 1st number: ";
    cin >> x;
    cout << "enter the operand: ";
    cin >> op;
    cout << "enter the 2nd number: ";
    cin >> y;

    if (op == '+')
        cout << x + y;
    else if (op == '-')
        cout << x - y;
    else if (op == '*')
        cout << x * y;
    else if (op == '/')
        if(y == 0)
            cout << "can't divide by zero!";
        else
            cout << x / y;
    else if (op == '%')
        cout << x % y;

}