#include <iostream>
#include<cstring>
using namespace std;

class BankAccount{
  private:
   string DepositerName;
   int AccountNumber;
   string AccountType;
   double Balance;
  
  public:
void initialValues(string d_n,int a_n,string a_t,double ba){
   this->DepositerName=d_n;
  this->AccountNumber=a_n;
  this-> AccountType=a_t;
  this->Balance=ba;
}

void depositAmount(double amt){
  if(amt<=0){
    cout<<" Invalid amount to deposit "<<endl;
  }
  this->Balance=this->Balance+amt;

  cout<<"After deposit Your new balance: "<<this->Balance<<endl;
}

void  withdrawAmount(double amt){
  if(amt<=0){
    cout<<"valid amount to withdraw"<<endl;
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
int n;
cout<<"enter number of bank accounts to create : ";
cin>>n;

  BankAccount p[n];
 for(int i=0 ;i<n;i++){
     string d_n;
     int a_n;
     string a_t;
     double ba;
    cout<<"enter details of Depositer "<<i+1<<":"<<endl;
    cout<<"enter DepositerName: ";
    cin.ignore();
    getline(cin,d_n);
    cout<<"enter AccountNumber: ";
    cin>>a_n;
    cout<<"entre AccountType: ";
    cin.ignore();
    getline(cin,a_t);
    cout<<"enter balance: ";
    cin>>ba;
    p[i+1].initialValues(d_n,a_n,a_t,ba);
    int opt=1;
    while(opt){
    cout<<endl;
    cout<<"MENU for Depositer "<<i+1<<": "<<endl;
      cout<<"1.Deposit Amount"<<endl;
      cout<<"2.Withdraw Amount"<<endl;
      cout<<"3.Display Details"<<endl;
      cout<<"4.Exit"<<endl;
      int option;
      cout<<endl;
      cout<<"enter option: ";
      cin>>option;
      if(option==4){
        opt=0;
        cout<<endl;
      }
      else if(option==1){
        int  amt;
        cout<<"enter amount: ";
        cin>>amt;
         p[i+1].depositAmount( amt);
      }
      else if(option==2){
        int amt;
        cout<<"enter amount: ";
        cin>>amt;
        p[i+1].withdrawAmount( amt);
      }
      else if(option==3){
        p[i+1].display();
      }
    }
    
 }
    return 0;
}
