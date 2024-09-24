#include <iostream>
#include<cstring>
using namespace std;

class BankAccount{
  private:
   string DepositerName;
   long long AccountNumber;
   string AccountType;
   double Balance;
  
  public:


void initialValues(string d_n,long long a_n,string a_t,double ba){
   this->DepositerName=d_n;
  this->AccountNumber=a_n;
  this-> AccountType=a_t;
  this->Balance=ba;
}

void depositAmount(long long amt){
  if(amt<=0){
    cout<<" Invalid amount to deposit "<<endl;
  }
  this->Balance=this->Balance+amt;
  cout<<"After deposit Your new balance: "<<this->Balance<<endl;
}

void  withdrawAmount(long long amt){
  if(amt<=0){
    cout<<" Invalid amount to withdraw"<<endl;
  }
  else if(amt>this->Balance){
    cout<<"Invalid amount to withdraw"<<endl;
  
  }
  this->Balance=this->Balance-amt;
  cout<<"After withdraw Your new balance: "<<this->Balance<<endl;
}

void display(){
  cout<<endl;
  cout<<"Details are as follows: "<<endl;
  cout<<"DepositerName: "<<this->DepositerName<<endl;
  cout<<"Balance: "<<this->Balance<<endl;
  cout<<endl;
}

};



int main() 
{
  BankAccount p1;
  p1.initialValues("Shubam",123462136257,"Savings",1000);
  p1.display();

  p1.depositAmount(1000);

  p1.withdrawAmount(200);
  p1.display();
    
    return 0;
}
