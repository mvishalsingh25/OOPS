#include<iostream>
#include<cstring>
using namespace std;

struct student{
    string name;
    int rollNo;
    float marks;
};

void displayDetails(struct student *ptr,int n){
    cout<<"Following are the details of students: "<<endl<<endl;
    cout<<"Name\tRollNo\tMarks"<<endl;
    for(int i=0;i<n;i++){
        cout<<ptr[i].name<<"\t"<<ptr[i].rollNo<<"\t"<<ptr[i].marks<<endl;
    }
}
int main(){
    int n;
    cout<<"enter no. of students: ";
    cin>>n;
    // student  *ptr=(student *)malloc(n*sizeof(struct student));
    student *ptr=new student[n];
    
    for(int i=0;i<n;i++){
    cout<<"enter details of student "<<i+1<<": "<<endl;
       cout<<"Enter name: ";
     cin>>ptr[i].name;
       cout<<"Enter roll no: ";
       cin>>ptr[i].rollNo;
       cout<<"Enter marks: ";
       cin>>ptr[i].marks;
    }
    cout<<endl;
    displayDetails(ptr,n);
    return 0;
}
