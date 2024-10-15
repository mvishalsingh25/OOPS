#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

class Student{
       string name;
       int studentId;
 public:
    Student(string n,int sid):name(n),studentId(sid){};

    int getStudentId(){
    return studentId;
    };

   void display(){
    cout<<"Student name: "<<name<<endl;
    cout<<"Student Id: "<<studentId<<endl;
   };

};

class Course{
    string courseName;
    int maxCapacity;
    vector<Student>enrolled;
 public:
   Course(string cn,int maxcap):courseName(cn),maxCapacity(maxcap){};
 
   void enrollStudent(Student &s){
   if(enrolled.size()<maxCapacity){
   enrolled.push_back(s);
   cout<<"Student having id " <<s.getStudentId()<<" enrolled in "<<courseName<<endl;
   }
   else{
   cout<<"Course is full.Cannot enroll student having id "<<s.getStudentId()<<endl;
   };
  }


  void withdrawStudent(int sid){
  for(int i=0;i<enrolled.size();i++){
  if(enrolled[i].getStudentId()==sid){
  cout<<"Student having id " <<sid<<" withdraw from "<<courseName<<endl;
  enrolled.erase(enrolled.begin()+i);
  }
  else{
  cout<<"Student with id "<<sid<<" is not enrolled in "<<courseName<<endl;
 }
 }
 };

   void displayEnrolled(){
   cout<<"**Enrolled Students: "<<endl;
   for(auto s:enrolled){
   s.display();
   }
   };
   
};


int main(){
Student s1("Aakash",1);
Student s2("Bobby",2);
Student s3("Dinesh",3);

s1.display();
cout<<endl;
s2.display();
cout<<endl;
s3.display();
cout<<endl;
Course course("OOP",2);
course.enrollStudent(s1);
cout<<endl;
course.enrollStudent(s2);
cout<<endl;
course.enrollStudent(s3);
cout<<endl;
course.displayEnrolled();
cout<<endl;
course.withdrawStudent(2);
cout<<endl;
course.displayEnrolled();
return 0;
};
