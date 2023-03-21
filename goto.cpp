// a C++ program to calculate the avg of numbers entered by user
// if the user enters a negative number it ignores and 
// calculates the average num entered before it.




#include <iostream>
using namespace std;

int main(){
    float num, sum, avg = 0.0;
    int i, n;

    cout << "enter max number of inputs: ";
    cin  >> n;

    for(int i = 1; i <= n; ++i){
        cout << "enter n" << i << ": ";
        cin  >> num;

        if(num < 0.0){
            goto jump;
        }
        sum += num;
    }
jump:
    avg = sum / (i - 1);
    cout << "\naverage is: " << avg;
    return 0;
}