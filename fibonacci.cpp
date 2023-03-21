//A C++ program to write a Fibonacci series up to n number of terms.

#include <iostream>

using namespace std;

int main(){
    int n, t1= 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: " ;
    cin >> n;

    cout << "Fibonacci Series: ";

    for(int i = 1; i <= n; ++i){
        if(i == 1){
            cout << t1 << ", ";
        }

        if(i == 2){
            cout << t2 << ", ";
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }

    return 0;
}
