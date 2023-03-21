#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int num;
    cout << "enter a number:\n";
    cin>>num;
    int inc = num;
    for(int i =0;i<20;i++){
        for(int j = 0; j < 10;j++){
            cout << setw(4) << num << " ";
            num+=inc;
        }
        cout  << endl;
    }
    return 0;
}