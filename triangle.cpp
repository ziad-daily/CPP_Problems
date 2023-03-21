#include <iostream>
using namespace std;

int main (){
        int i = 1,  j = 1;
        int num;
        cin >> num;
        while(i <= num){
            j = 1;
            while (j<=i){
                cout << i;
                j++;
            }
            cout << endl;
            i++;
        }

return 0;
}
