#include <iostream>
#include <cmath>

using namespace std;

string weekDay(int dayNum){
    string dayName;
    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "invalid week number!";
        break;
    }
    return dayName;
}

int main(){
    
    cout<<weekDay(8);

    return 0;
}