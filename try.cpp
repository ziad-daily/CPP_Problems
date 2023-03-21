#include <iostream>
using namespace std;

int main(){
    int i = 0,  sum = 0;
    while (i <= 10){
        switch (i % 5){
            case 0: sum += i;
            case 1: sum += i;
            case 3: sum += i;
            case 2: break;
            
        
            default: sum = 0;
        }
    i += 2;
    }
    cout <<sum;
    return 0;
}