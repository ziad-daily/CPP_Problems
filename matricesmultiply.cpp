#include <iostream>

using namespace std;
int main(){
    int A[3][3]={{1,2,3},{-1,0,3},{7,4,1}};
    int B[3][3]={{3,1,3},{-1,0,-2},{0,4,1}};
    int Mult[3][3];
    for(int i =0;i <3;i++){
        for(int j = 0; j<3;j++){
            Mult[i][j] = A[i][j] * B[i][j] + A[i][j+1] * B[i+1][j] + A[i][j+2] * B[i+2][j];
        }
    }
    
    cout << "The result of the multiplication of matrix A and B is:\n";
    for(int i =0;i <3;i++){
        for(int j = 0; j<3;j++){
            cout << Mult[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}