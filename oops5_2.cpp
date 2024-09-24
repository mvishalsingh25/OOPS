#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
    
  public: 
  
  virtual void input(string n,int a){
   name=n;
   age=a;
  };
  
  virtual void display(){
  cout<<endl;
  cout<<"Person: "<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  }

};

class Student:public Person{
  string name;
  int age;
  public:
  
 void input(string n,int a ){
 name=n;
 age=a;
 };

 void display(){
  cout<<endl;
  cout<<"Student: "<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  }

};

int main(){
Person p1;
p1.input("Rohit" ,20);
Student s;
Person *pptr;
pptr=&p1;
pptr->display();

Student s1;
pptr=&s1;
s1.input("Sarthik",18);
pptr->display();
return 0;
}
