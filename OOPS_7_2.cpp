//WAP to implement the concept of virtual base class
#include<iostream>
using namespace std;

class GrandParent {
 
 public : 
 void show(){
 cout<<"GrandParent ***"<<endl;
}
};

class Parent : virtual public GrandParent {

public:
void show(){
cout<<"Parent ***"<<endl;
}

};

class Child :  public Parent{

//public:
//void show(){
//cout<<"Child***"<<endl;
//}

};

int main(){
   Child c1 = Child();
   c1.show();
}
