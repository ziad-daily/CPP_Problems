#include <iostream>
using namespace std;

int main(){
    char oper;
    float num1, num2;
    cout << "enter an operator (+, -, /, *): ";
    cin >> oper;
    cout << "enter 2 numbers: "<< endl;
    cin >> num1 >> num2;
    switch(oper){
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;


        default:
        cout << "invalid operator!";
        break;
    }
    return 0;
}