  //WAP to show how values are passed to base class constructors using derived class constructor
#include<iostream>
using namespace std;

class A {
  private :
       int a;
  
  public :

     A(int a ){
     cout<<"Parameterised Constructor A is called "<<endl;
      this->a = a;
      cout<<"a = "<<a <<endl;
     };   
     
     ~A(){
     cout<<"Destructor A is called "<<endl;
     }; 
     
};

class B : public A{
private:
 int b ;

public : 
  
 B(int a, int b):A(a){
  cout<<"Parameterised Constructor B is called " <<endl; 
  this->b=b;
  cout<<"b = "<<b<<endl;
  }
  
  ~B(){
 cout<<"Destructor B is called " <<endl; 
  }

};

class C : public A{
 private :
 int c;
 
 public : 
 
  C(int a , int c ):A(a){
  
 cout<<"Parameterised Constructor C is called "<<endl; 
 this->c=c;
 cout<<"c = "<<c<<endl;
  }
  
  ~C(){
 cout<<"Destructor C is called " <<endl; 
  }
};

int main(){
A a2 = A(500);
cout<<endl;
B b2= B(1000, 2000);
cout<<endl;
C c2 = C(3000,4000);
cout<<endl;
return 0;
}
