#include <iostream>
#include <cmath>

using namespace std;


int max(int x, int y, int z){
    int result;

    if(x >= y && x >= z){
        result = x;
    }
    else if(y >= x && y >= z){
        result = y;
    }
    else {
        result = z;
    }
    return result;    
}


int main(){
    
    cout << max(1, 5, 6);
    return 0;
}