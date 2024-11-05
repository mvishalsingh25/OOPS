#include<iostream>
using namespace std;

static int i = 0;

class Date {
private :
int month;
int day;
int year;

public:
 Date():month(0),day(0),year(0){};
 
Date(int m, int d,int y){
month=m;
day=d;
year=y;
 i++;
 };
 
 
 void  changeValues(int m,int d,int y){
month=m;
day=d;
year=y;
 };
 
 void getValues(){
 cout<<"Day: "<<day<<endl;
 cout<<"Month: "<<month<<endl;
 cout<<"Year: "<<year<<endl;
 }
 
 void displayDate(){
 cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
 
 }
 
 void TotalDates(){
 cout<<"Total no. of dates : "<<i<<endl;
 }
 
 
 
 bool operator < (Date);
 bool operator > (Date);
 bool operator == (Date);
 bool operator != (Date);
 void operator -- ();
  
 

};




bool Date :: operator < (Date date){
 if(year < date.year) return true;
 else if(year > date.year) return false;
 else if (year == date.year){
    if(month < date.month) return true;
 else if(month > date.month) return false;
 else if(month ==date.month){
   if(day < date.day) return true;
 else if (day > date.day) return false;
 return false;
  }
}
};


bool Date :: operator > (Date date){
 if(year > date.year) return true;
 else if(year < date.year) return false;
 else if (year == date.year){
    if(month > date.month) return true;
 else if(month < date.month) return false;
 else if(month ==date.month){
   if(day > date.day) return true;
 else if (day < date.day) return false;
 return false;
  }
}
};


bool Date :: operator == (Date date){
  if(year == date.year) {
   if(month ==date.month){
    if(day ==date.day) return true;
    else return false;
   }
   else return false;
  }
  else return false;
};



bool Date :: operator != (Date date){
  if(year!=date.year) return true;
  else if ( month != date.month) return true;
  else if( day!=date.day) return true;
  return false;
};


void Date :: operator --(){






};

int main(){
  cout<<endl;
  Date d1(12 , 25 , 2004 );
  d1.getValues();
    cout<<endl;
  d1.displayDate();

  d1.changeValues(10,25,2003);
    cout<<endl;
  d1.displayDate();
    cout<<endl;
  Date d2(10,25,2004);
  Date d3 (10,25,2004);
  d2.displayDate();
  cout<<(d1<d2)<<endl;
    cout<<endl;
  cout<<(d1>d2)<<endl;
    cout<<endl;
  cout<<(d2==d3)<<endl;
    cout<<endl;
    cout<<(d2==d3)<<endl;
    cout<<endl;
}
