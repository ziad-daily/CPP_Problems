//A C++ program to write a Fibonacci sequence up to a certain number.

#include <iostream>

using namespace std;

int main(){
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter the limit number: ";
    cin >> n;

    cout << "Fibonacci Sequence: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;
    while(nextTerm <= n){
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
