#include <iostream>
using namespace std;
int main(){
    int fa = 1,i = 2, sum = 0,n;

    cout << "enter N: ";
    cin >> n;

    for (int i = 2; i<=n;i+2){
        fa =1;
        for(int j = 0; j <= i; j++){
            fa = fa*(i-j);
            cout<< fa << endl;
        }
        sum += fa;
        cout << sum<<endl;
    }
    return 0;
}