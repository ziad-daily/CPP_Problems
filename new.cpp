#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double num1, num2;
    char op;
    cout << "Enter 1st number: ";
    cin>> num1;

    cout << "Enter operator: ";
    cin>> op;

    cout << "Enter 2nd number: ";
    cin>> num2;

    switch(op){
        case 0:
            op = '+';
            cout << num1 + num2;
            break;
        case 1:
            op = '-';
            cout << num1 - num2;
            break;
        case 2:
            op = '/';
            cout << num1/num2;
            break;
        case 3:
            op ='*';
            cout << num1 * num2;
            break;
        default:
            cout << "invalid operator!";
            break;
    }
    return 0;
}