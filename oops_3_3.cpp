#include<iostream>
using namespace std;

class Fruit{
public:
 string name;
 string color;
 string taste;
 int pricePerkg;
 
 void getData(){
 cout<<endl;
 cout<<"Details of fruit are as follows: "<<endl<<endl;
 cout<<"Name: "<<this->name<<endl;
 cout<<"Color: "<<this->color<<endl;
 cout<<"Taste: "<<this->taste<<endl;
 cout<<"Price/kg: "<<this->pricePerkg<<endl;
 }
};

int main(){
Fruit f1;
f1.name="Apple";
f1.color="Red";
f1.taste="Sweet";
f1.pricePerkg=180;
f1.getData();

Fruit f2;
f2.name="Guava";
f2.color="Green";
f2.taste="Sour";
f2.pricePerkg=90;
f2.getData();
return 0;
}
