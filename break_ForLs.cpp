
// break in for loops.
#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 5; ++i){
        if (i == 5){
            break;
        }
        cout << i << " ";
    }
    return 0;
}