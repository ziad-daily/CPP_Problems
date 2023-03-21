#include <iostream>
#include <cmath>

using namespace std;


class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        bool hasHonors(){
            if(gpa >= 3.6){
                return true;
            }
            else{
                return false;
            }
        }
};

int main (){

    Student student1("Jim", "business", 3.55);
    Student student2("Carl", "Engineering", 3.97);

    cout << student1.hasHonors() <<endl;
    cout << student2.hasHonors() <<endl;





    return 0;
}