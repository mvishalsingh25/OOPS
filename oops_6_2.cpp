#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    string name;
    int phoneNo;

public:
   Employee(){
    cout<<"Default constructor is called----> Employee"<<endl;
   }
   Employee(string n, int ph):name(n),phoneNo(ph){
    cout<<"Parameterised constructor is called---->Employee"<<endl;
   }

   void putData(string name, int PhoneNo){
   this->name=name;
   this->phoneNo=PhoneNo;
   }

   void getData(){
    cout<<"Name: "<<name<<endl;
    cout<<"Phone No : "<<phoneNo<<endl;
   }

 ~Employee(){
    cout<<"Destructor is called --->Employee"<<endl;
 }
};
class Manager : public Employee{
    string title;
     int club_dues;

public:

   Manager(){
    cout<<"Default constructor is called--->Manager"<<endl;
   }
  
  Manager (string n, int pn , string t, int cd):Employee(n,pn),title(t),club_dues(cd){};

  void putData(string n ,  int pn ,string t, int cd){
     Employee::putData(n,pn);
     title = t;
     club_dues=cd;
  }

  void getData(){
     Employee::getData();
     cout<<"Title: "<<title<<endl;
     cout<<"Club Dues : "<<club_dues<<endl;
  }

  ~Manager(){
    cout<<"Destructor is called --> Manager"<<endl;
  }
};
class Scientist: public Employee{
    string publications;

    public:
    Scientist(){
        cout<<"Default constructor is called --.Scientist"<<endl;
    }
    Scientist( string n, int pn,string publications){
        Employee(n,pn);
       this->publications=publications;
    }

    void putData(){
  
    }
    
    void getData(){

    }
};
class Laborer:public Employee{

};
int main(){
cout<<endl;
Employee e1("Rohan Gupta",9983725374);
e1.getData();
Manager m1("Tarun",9906353251,"Project Manager",12435);
m1.getData();
cout<<endl;

return 0;
}
