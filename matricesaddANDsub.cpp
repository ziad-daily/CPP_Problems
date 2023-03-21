#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main(){
    int A[3][3]={{1,2,3},{-1,0,3},{7,4,1}};
    int B[3][3]={{3,1,3},{-1,0,-2},{0,4,1}};
    int Sum[3][3];
    int Sub[3][3];
    for(int i =0;i <3;i++){
        for(int j = 0; j<3;j++){
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i =0;i <3;i++){
        for(int j = 0; j<3;j++){
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "The sum of matrix A and B is:\n";
    for(int i =0;i <3;i++){
        for(int j = 0; j<3;j++){
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The subtraction of matrix A and B is:\n";
    for(int i =0;i <3;i++){
        for(int j = 0; j<3;j++){
            cout << Sub[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}