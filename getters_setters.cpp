#include <iostream>

using namespace std;
class Movie {
    private:
    string rating;`
    public:
        string name;
        string maker;
        
        Movie(string aName, string aMaker, string aRating){
            name = aName;
            maker = aMaker;
            rating = aRating;
        }



};




int main(){

    Movie movie1("F9", "russo", "pg-13");
    cout << movie1.rating;




    return 0;
}