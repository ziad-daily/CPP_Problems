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

    switch(op){
        case '+': cout << x + y;break;
        case '-': cout << x - y;break;
        case '*': cout << x * y;break;
        case '/': 
            if(y == 0) 
                cout << "error: can't divide by zero!";
            else 
                cout << x / y;break;
        case '%': cout << x % y;break;
        default: cout << "invalid operator!";
    }

}