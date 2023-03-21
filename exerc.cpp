#include <iostream>

using namespace std;

void fun(int a, int &b){
    a = 4;
    b = 5 ;
}

int main (){
    int x = 3 , y = 4;
    fun(x,y);
    cout << x << " " << y;
    

    return 0;
}