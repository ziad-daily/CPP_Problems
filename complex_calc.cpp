#include <iostream>


using namespace std;

int main(){

    double x, y;

    char op;

    cout << "Enter your first number: ";
    cin >> x;

    cout << "Enter your operater: ";
    cin >> op;

    cout << "Enter your second number: ";
    cin >> y;
    switch (op){
        case '+': cout << x << " + " << y << " = " << x + y; break;
        case '-': cout << x << " - " << y << " = " << x - y; break;
        case '*': cout << x << " * " << y << " = " << x * y; break;
        case '/': cout << x << " / " << y << " = " << x / y; break;
        case '%': cout << x << " % " << y << " = " << int(x) % int(y); break;
        default: cout << "invalid operater!";
    }
    
    
    return 0;
}