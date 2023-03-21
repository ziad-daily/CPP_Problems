#include <iostream>
#include <cmath>

using namespace std;

class Movie{
    public:
        string name;
        string writer;
        string director;
        string cast;
        double length;
        Movie(string aName, string aWriter, string aDirector, string aCast, double aLength){
            name     = aName;
            writer   = aWriter;
            director = aDirector;
            cast     = aCast;
            length   = aLength;
        }
        Movie(){
            name     = "NO name";
            writer   = "No writer";
            director = "No director";
            cast     =   "No cast";
            length   = 0;     
        }
};

int main(){


    Movie movie1("ENDGAME", "Stan Lee", "joe and anthony Russo", "chris", 3.15);
    Movie movie2("F9", "Vin", "Vin", "Vin", 2.20 );
    Movie movie3;
    
 
    cout << movie1.name <<endl;
    cout << movie2.name <<endl;
    cout << movie1.cast <<endl;
    cout << movie2.cast <<endl;
    cout << movie1.length <<endl;
    cout << movie3.name;


    return 0;
}