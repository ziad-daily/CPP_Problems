#include <iostream>
#include <cmath>

using namespace std;


int main(){

    bool isMale = false;
    bool isTall = false;
    if(isMale && isTall){
        cout << "That guy is a tall male!, next";
    }
    else { 
        cout << "He is not a tall male!"<<endl;
        cout<<""<<endl;
    }

    double x = 5.0;
    double y = 6.0;
    if(x > y){
        cout << "x is greater than y!";
    }
    else {
        cout << "x is less than y!"<<endl;
    }

    int age;
    int allowedAge;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter allowed age: ";
    cin >> allowedAge;
    
    if(age >= allowedAge){
        cout << "You are 18+ welcome to the party!"<<endl;
    }
    else {
        cout << "you are not old enough to be here!";
    }

    string answer;

    cout << "Are you 18 yo or above? yes/no: ";
    cin >> answer;

    if(answer == "yes"){
        cout << "welcome to the party!!!!"<<endl;
    }
    else if(answer == "no"){
        cout << "sorry, you are not old enough!";
    }
    else{
        cout << "Undetected answer! please try again!";
    }
    return 0;
}