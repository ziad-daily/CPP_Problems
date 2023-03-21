#include <iostream>
using namespace std;

int main (){

    char x ;
    string c ;

    cout << "enter c:" << endl;
    getline(cin, c);
    cout << "enter x: " ;
    cin.get(x);

    cout << c;
    cout << x;
    return 0;
}