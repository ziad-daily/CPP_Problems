#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    

    cout << "enter the secret number from 1 to 10!"<<endl;
    
    while(num != guess && guessCount < guessLimit){
        guessCount++;
        cin >> guess;
        if(guess > 10){
            cout << "Try smaller than 10! "<<endl;
        }
        else if(guess < 1){
            cout << "Try bigger than 1! "<<endl;
        }
        else if(num != guess){
        cout << "try again! "<<endl;
        }
        else if(num == guess){
        cout << "Congrates!!!!!You won!!!! "<<endl;}
        else if(num != guess && guessCount > guessLimit){
            cout << "You lose!";
        }

    }
    
    

    return 0;
}