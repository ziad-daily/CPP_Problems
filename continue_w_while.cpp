#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int sum = 0;

    while(num >= 0){
        sum += num;
        cout << " enter a number: ";
        cin >> num;

        if(num > 50){
            cout << " 'invalid entry': u should only enter numbers < 50!" << endl;
            continue;
        }
        cout << "the sum is: " << sum << endl;
    }
    return 0;
}