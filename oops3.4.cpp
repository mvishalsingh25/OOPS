#include<iostream>
using namespace std;

class Vehicle{
 private :
 string brand;
 string model;
 int year;
 
 public:
 void setter(string b,string m,int y){
 this->brand=b;
 this->model=m;
 this->year=y;
 }
 
 void getDetails(){
 cout<<endl;
 cout<<"Details of Vehicle are as follows: "<<endl<<endl;
 cout<<"Brand: "<<this->brand<<endl;
 cout<<"Model: "<<this->model<<endl;
 cout<<"Year: "<<this->model<<endl;
 }
};

int main(){
Vehicle car1;
car1.setter("Toyota","Corolla",2020);
Vehicle car2;
car2.setter("Honda","Civic",2018);
Vehicle car3;
car3.setter("Ford","Mustang",2022);
car1.getDetails();
car2.getDetails();
car3.getDetails();
return 0;
}
