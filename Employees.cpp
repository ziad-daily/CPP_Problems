#include<iostream>
#include<string>
using namespace std;

 struct Name{
    string firstName; 
    string SecondName;
    string LastName;
};
 struct Address{
      string Street;
    string City;
   
};
 struct employees{
    Name name;
    Address address;
    int  id;
    float salary;

};
int main()
{
    
    employees employee[3];
    int ch;
    string lName;
    string name0;
    string city0;
    int h;
    int p;
    int ID;

 
 
  do{
     cout<<"Press 1 fill data of database \n";
     cout<<"Press 2 output data in the database \n";
     cout<<"Press 3 search on employee by First Name   \n";
     cout<<"Press 4 search on employees with salary greater than 1000 L.E \n";
     cout<<"Press 5 search on employee that take 500 L.E   \n";
     cout<<"Press 6 search on employee by ID \n";
     cout<<"Press 7 search to search on employee Who lives in “Maadi” city \n";
     cout<<"Press 8 search to print all the data of employees whose Last name is SharKawy\n";
     cout<<"press 9 exit  \n";
     cin>>ch;
    switch(ch){
    case 1:
    for(int i=0;i<3;i++){
        cout<<"please enter first,second and last name! \n";
        
        cin>>employee[i].name.firstName;
        cin>>employee[i].name.SecondName;
        cin>>employee[i].name.LastName;
        
        cout<<"please enter address \n";
       cin>>employee[i].address.Street;
      cin>>employee[i].address.City;
        cout<<"please enter id \n";
       cin>>employee[i].id;
        cout<<"please enter salary \n";
       cin>>employee[i].salary;
      
    }
break;
  case 2:
       for(int i=0;i<3;i++){
     cout<<" name \n";
     cout<<employee[i].name.firstName;
     cout<<employee[i].name.SecondName;
     cout<<employee[i].name.LastName<<endl;
     cout<<" address \n";
     cout<<employee[i].address.Street;
     cout<<employee[i].address.City<<endl;
     cout<<" id \n";
     cout<<employee[i].id<<endl;
     cout<<" salary \n";
     cout<<employee[i].salary<<endl;
    
}
break;
  case 3: 
 
      cout<<"Please enter search on employee by First Name   \n";
      cin>>name0;
 for(int i=0;i<3;i++){
     if(employee[i].name.firstName==name0){
         

        cout<<employee[i].name.firstName;
        cout<<employee[i].name.SecondName;
        cout<<employee[i].name.LastName<<endl;
         
     

    }
    
}
break;
case 4:
       cout<<" search on employees with salary greater than 1000 L.E \n";
 cin>>h;
for(int i=0;i<3;i++){
    if(employee[i].salary<=h){
        
        cout<<employee[i].salary<<endl;

        cout<<employee[i].name.firstName;
        cout<<employee[i].name.SecondName;
        cout<<employee[i].name.LastName<<endl;
    
    }
    
}
break;
case 5: 
      cout<<"Please  search on employee that take 500 L.E  \n";
      cin>>p;
 for(int i=0;i<3;i++){
     if(employee[i].salary==p){
         
         cout<<employee[i].salary<<endl;

        cout<<employee[i].name.firstName;
        cout<<employee[i].name.SecondName;
        cout<<employee[i].name.LastName<<endl;
    }
    
}
break;
case 6:
      cout<<" search on employee by ID \n";
      cin>>ID;
 for(int i=0;i<3;i++){
     if(employee[i].id== ID){
        
        cout<<employee[i].id<<endl;
        cout<<employee[i].name.firstName;
        cout<<employee[i].name.SecondName;
        cout<<employee[i].name.LastName<<endl;
        cout<<employee[i].address.Street;
      cout<<employee[i].address.City<<endl;
    }
    
}
break;
case 7:
      cout<<"Please search to search on employee Who lives in “Maadi” city \n";
      cin>> city0;
 for(int i=0;i<3;i++){
     if(employee[i].address.City==city0){
        
     cout<<employee[i].address.City ;
     cout <<employee[i].address.Street<<endl;
     cout<<employee[i].name.firstName;
     cout<<employee[i].name.SecondName;
     cout<<employee[i].name.LastName<<endl;
        
    }
    
}
break;
case 8:
 
      cout<<"Please search to print all the data of employees whose Last name is SharKawy  \n";
      cin>>lName;
 for(int i=0;i<3;i++){
     if(employee[i].name.LastName==lName){
        
        cout<<employee[i].name.LastName<<endl;
       cout<<employee[i].name.firstName;
        cout<<employee[i].name.SecondName;
        cout<<employee[i].name.LastName<<endl;
        
    }
    
}
 

default:
exit(9);
        
    }
    
}
while(ch!=3);
    
}