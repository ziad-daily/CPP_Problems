#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main(){
    
    int AscOrder[10] = {9,5,4,6,7,3,1,2,0,8};
    
    for(int j = 0;j < 10;j++){
        for (int i = 0;i<10;i++){
            if (AscOrder[j]<AscOrder[i]){
                AscOrder[j] = AscOrder[i];
            }
            
        }
        cout << AscOrder[j]<<", ";
    }
    
    return 0;
}