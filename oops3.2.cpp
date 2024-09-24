#include<iostream>
using namespace std;

class Student{
    private:
    string address;
    public:
    string name;
    string Dept;
    string rollNo;
    float marks;

Student(string name,string Dept,string rollNo,float marks){
    this->name=name;
    this->Dept=Dept;
    this->rollNo=rollNo;
    this->marks=marks;
}    
void setAddress(string address){
    this->address=address;
}
void getData(){
    cout<<endl;
    cout<<"Details of student are as follows: "<<endl<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Department: "<<this->Dept<<endl;
    cout<<"RollNo: "<<this->rollNo<<endl;
    cout<<"Marks: "<<this->marks<<endl;
    cout<<"Address: "<<this->address<<endl;
}
};
int main(){
    Student s1("Aakash","Computer Engineering","22BCS045",98);
    s1.setAddress("Jammu");
    s1.getData();
return 0;
}
