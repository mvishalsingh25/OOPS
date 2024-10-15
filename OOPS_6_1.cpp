#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    string name;
    long long phoneNo;

public:
   Employee(){
    cout<<"Default constructor is called----> Employee"<<endl;
   }
   Employee(string n, long long ph):name(n),phoneNo(ph){
    cout<<"Parameterised constructor is called---->Employee"<<endl;
   }

   void putData(string name, long long PhoneNo){
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
     float club_dues;

public:

   Manager(){
   Employee();
    cout<<"Default constructor is called--->Manager"<<endl;
   }
  
  Manager (string n, long long pn , string t, int cd):Employee(n,pn),title(t),club_dues(cd){};

  void putData(string n ,  long long  pn ,string t, float cd){
     Employee::putData(n,pn);
     title = t;
     club_dues=cd;
  }

  void getData(){
     cout<<"Manager: "<<endl;
     Employee::getData();
     cout<<"Title: "<<title<<endl;
     cout<<"Club Dues : "<<club_dues<<endl;
  }

  ~Manager(){
    cout<<"Destructor is called --> Manager"<<endl;
  }
};

class Scientist: public Employee{
    int publications;

    public:
    Scientist(){
    Employee();
        cout<<"Default constructor is called --.Scientist"<<endl;
    }
    Scientist( string n, long long  pn,int pb):Employee(n,pn),publications(pb){};

    void putData( string n, long long pn,int publications){
       Employee::putData(n,pn);
       this->publications=publications;
    }
    
    void getData(){
      cout<<"Scientist: "<<endl;
      Employee::getData();
      cout<<"Publications: "<<publications<<endl;
    }
    
    ~Scientist(){
        cout<<"Destructor is called --> Scientist"<<endl;
    }
    
};
class Laborer:public Employee{
public:
  Laborer(){
Employee();
 cout<<"Default constructor is called -->Laborer"<<endl;
}

Laborer(string n,long long pn):Employee(n,pn){};

void putData(string n,long long pn){
 Employee::putData(n,pn);
}

void getData(){
Employee::getData();
}

~Laborer(){
          cout<<"Destructor is called --> Laborer"<<endl;
}

};

int main(){
cout<<endl;
Employee e1("Rohan Gupta",9983725374);
e1.getData();
cout<<endl;

Manager m1("Tarun Khajuria",9906353251,"Project Manager",5000.00);
m1.getData();
cout<<endl;

Scientist s1("Hardik Singh",9908765456,6);
s1.getData();
cout<<endl;

Laborer l1("Sonu",9987546231);
l1.getData();

cout<<endl;

return 0;
}
