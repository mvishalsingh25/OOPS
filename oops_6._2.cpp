#include<iostream>
#include<cstring>
using namespace std;

class Employee{
   string name;
   unsigned int phoneNo;

public:
   Employee(){
    cout<<"Default constructor is called----> Employee"<<endl;
   }
   Employee(string n,unsigned int ph):name(n),phoneNo(ph){
    cout<<"Parameterised constructor is called---->Employee"<<endl;
   }

   void putData(string name,unsigned int PhoneNo){
   this->name=name;
   this->phoneNo=PhoneNo;
   }

   void getData(){
    cout<<"Name: "<<name<<endl;
    cout<<"Phone No : "<<phoneNo<<endl;
   }


};
class Manager : public Employee{
    string title;
    unsigned int club_dues;

   Manager(){
    cout<<"Default constructor is called--->Manager"<<endl;
   }
  
   Manager(string title, unsigned int club_dues){
    this->title = title;
    this->club_dues=club_dues;
   }

   void
   
   
};
class Scientist: public Employee{
    string publications;
    Scientist(){
        cout<<"Default constructor is called --.Scientist"<<endl;
    }
    Scientist(string publications){
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

return 0;
}
