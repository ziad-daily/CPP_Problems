#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main(){
    int term1 = 1, term2 = 1,n = 1000, s;
    int fib[n];
    fib[0] = term1;
    fib[1] = term2;
    for (int i = 1; i < n; i++){
        fib[i + 1] = fib[i] + fib[i-1];
    }
    cout << "fibonacci numbers calculater:\n";
    cout << "N = ";
    cin>> s;
    cout << "the fib number is: " << fib[s];

    
    return 0;
}