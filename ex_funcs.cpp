#include <iostream>
#include <cmath>

using namespace std;

int power(int base, int pow){
    int result = 1;
    for(int i = 0; i < pow; i++){
        result = result * base;

    }
    return result;
}

int main(){
    
cout << power(2, 5);





    return 0;
}