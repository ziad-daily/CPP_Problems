#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    bool cancel = true;
    cout << "welcome to math tutor";
    cout << "you will practice some exercises and you will only\nhave three tries to get the correct answer\n\n\n";
    float respond;
    int num;
    srand (time(0));
    float x = rand()%51;
    float y = rand()%51;
    cout << "What do you wanna practice:\n";
    cout << "1-addition\n2-multiplication\n3-division\n4-subtraction\n5-remainder\n";
    cin >> num;
    
    switch(num){
        case 1 :
            cout << "add the following two numbers:\n";
            cout << x << " + " << y << " =......\n" ;
            cin >> respond;
            if (respond == (x+y)) {
                cout << x << " + " << y << " = " << respond;
                cout << "\ncorrect answer!"; 
            }
            else {
                for (int i = 1;i<=3;i++){
                    switch(i){
                        case 1:
                            
                            if (respond == (x+y)) {
                                cout << x << " + " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 2 tries left....\n";
                                cin >> respond;}break;
                        case 2:
                        
                            if (respond == (x+y)) {
                                cout << x << " + " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 1 try left....\n";
                                cin >> respond;}break;
                                
                        case 3:
                         
                            if (respond == (x+y)) {
                                cout << x << " + " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else
                            cout << "\nincorrect answer 0 tries left....\n";break;
                            default:break;
                    }
                }
                if (cancel){
                cout << "sorry, you ran out of tries\n";
                cout << "the correct answer is:\n";
                cout << x << " + " << y << " = " << x + y ;}
            }break;



        case 2 :
            cout << "multiply the following two numbers:\n";
            cout << x << " * " << y << " =......\n" ;
            cin >> respond;
            if (respond == (x*y)) {
                cout << x << " * " << y << " = " << respond;
                cout << "\ncorrect answer!"; 
            }
            else {
                for (int i = 1;i<=3;i++){
                    switch(i){
                        case 1:
                            
                            if (respond == (x*y)) {
                                cout << x << " * " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 2 tries left....\n";
                                cin >> respond;}break;
                        case 2:
                        
                            if (respond == (x*y)) {
                                cout << x << " * " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 1 try left....\n";
                                cin >> respond;}break;
                                
                        case 3:
                         
                            if (respond == (x*y)) {
                                cout << x << " * " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else
                            cout << "\nincorrect answer 0 tries left....\n";break;
                            default:break;
                    }
                }
                if(cancel){
                cout << "sorry, you ran out of tries\n";
                cout << "the correct answer is:\n";
                cout << x << " * " << y << " = " << x * y ;}
            }break;



        case 3 :
            cout << "divid/ the following two numbers:\n";
            cout << x << " / " << y << " =......\n" ;
            cin >> respond;
            if (respond == (x/y)) {
                cout << x << " / " << y << " = " << respond;
                cout << "\ncorrect answer!"; 
            }
            else {
                for (int i = 1;i<=3;i++){
                    switch(i){
                        case 1:
                            
                            if (respond == (x/y)) {
                                cout << x << " / " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 2 tries left....\n";
                                cin >> respond;}break;
                        case 2:
                        
                            if (respond == (x/y)) {
                                cout << x << " / " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 1 try left....\n";
                                cin >> respond;}break;
                                
                        case 3:
                         
                            if (respond == (x/y)) {
                                cout << x << " / " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else
                            cout << "\nincorrect answer 0 tries left....\n";break;
                            default:break;
                    }
                }
                if(cancel){
                cout << "sorry, you ran out of tries\n";
                cout << "the correct answer is:\n";
                cout << x << " / " << y << " = " << x / y ;}
            }break;



        case 4 :
            cout << "subtrac- the following two numbers:\n";
            cout << x << " - " << y << " =......\n" ;
            cin >> respond;
            if (respond == (x-y)) {
                cout << x << " - " << y << " = " << respond;
                cout << "\ncorrect answer!"; 
            }
            else {
                for (int i = 1;i<=3;i++){
                    switch(i){
                        case 1:
                            
                            if (respond == (x-y)) {
                                cout << x << " - " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 2 tries left....\n";
                                cin >> respond;}break;
                        case 2:
                        
                            if (respond == (x-y)) {
                                cout << x << " - " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 1 try left....\n";
                                cin >> respond;}break;
                                
                        case 3:
                         
                            if (respond == (x-y)) {
                                cout << x << " - " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else
                            cout << "\nincorrect answer 0 tries left....\n";break;
                            default:break;
                    }
                }
                if(cancel){
                cout << "sorry, you ran out of tries\n";
                cout << "the correct answer is:\n";
                cout << x << " - " << y << " = " << x - y ;}
            }break;



        case 5 :
            cout << "what is the remainder of the following two numbers:\n";
            cout << x << " % " << y << " =......\n" ;
            cin >> respond;
            if (respond == (int(x)%int(y))) {
                cout << x << " % " << y << " = " << respond;
                cout << "\ncorrect answer!"; 
            }
            else {
                for (int i = 1;i<=3;i++){
                    switch(i){
                        case 1:
                            
                            if (respond == (int(x)%int(y))) {
                                cout << x << " % " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 2 tries left....\n";
                                cin >> respond;}break;
                        case 2:
                        
                            if (respond == (int(x)%int(y))) {
                                cout << x << " % " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else{
                                cout << "\nincorrect answer try again 1 try left....\n";
                                cin >> respond;}break;
                                
                        case 3:
                         
                            if (respond == (int(x)%int(y))) {
                                cout << x << " % " << y << " = " << respond;
                                cout << "\ncorrect answer!"; cancel = false;
                            }
                            else
                            cout << "\nincorrect answer 0 tries left....\n";break;
                            default:break;
                    }
                }
                if (cancel){
                cout << "sorry, you ran out of tries\n";
                cout << "the correct answer is:\n";
                cout << x << " % " << y << " = " << int(x)%int(y) ;}
            }break;



        default: cout << "invalid choice!";
        
    }
    

    return 0;
}