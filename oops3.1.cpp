// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

class Person{
 private:
   int salary;
   
 public:


   string name;
   int age;
   string gender;
   string occupation;

     
   void setSalary(int x){
    this->salary=x;
     }
 void getData(){
    cout<<endl;
    cout<<"Details of Person are as follows: "<<endl<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Age: "<<this->age<<endl;
    cout<<"Gender: "<<this->gender<<endl;
    cout<<"Occupation: "<<this->occupation<<endl;
    cout<<"Salary: "<<this->salary<<endl;
    cout<<endl;
 }
 
};
int main(){
  Person p1;
  p1.name="Rohan";
 p1.age=23;
 p1.gender="male";
 p1.occupation="Teacher";
 p1.setSalary(55000);
 p1.getData();
return 0;
}
