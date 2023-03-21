
//sum of 2 positive numbers only 

#include <iostream>

using namespace std;

int main(){
    int num = 0;
    int sum = 0;
    do {
        sum += num;
        cout <<"Enter a number: ";
        cin >> num;
    }
    while(num >= 0);

    cout << "\nThe sum is: " << sum << endl;



    return 0;
}