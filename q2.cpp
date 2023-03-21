// q2
#include<iostream>
using namespace std;


int main(){
    int greater_Or_equal_ten = 0;
    int X[10];
    for (int i =0;i < 10;i++){
        cout << "enter an integer: ";
        cin >> X[i];
        if(X[i] >= 10){
            greater_Or_equal_ten++;
        }
    }
    cout << greater_Or_equal_ten;
}