// A C++ program to add only positive numbers


#include <iostream>

using namespace std;

int main(){
    int num;
    int sum = 0;

    while(true){
        cout << "enter a number: ";
        cin >> num;
        if(num < 0){
            cout << "u should enter only positive numbers! try again";
            break;
        }
        sum += num;
        cout << "The sum is: " << sum << endl;
    }
    return 0;
}