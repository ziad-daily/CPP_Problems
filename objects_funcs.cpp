#include <iostream>
#include <cmath>

using namespace std;

class School {
    public:
        string name;
        string address;
        School(string aName, string aAddress){
            name    = aName;
            address = aAddress;
        }
        School(){
            name    = "No name";
            address = "no address";
        }
};

int main(){
    
    School school1("Alawael", "sc.st");
    School school2;
    cout << school1.name<<endl;
    cout << school2.name<<endl;
    cout << school2.address<<endl;
    cout << school1.address<<endl;





    return 0;
}