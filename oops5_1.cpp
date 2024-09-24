#include<iostream>
using namespace std;

class Time{
int hrs;
int min;
int sec;

public:
Time(){};

Time(int h,int m,int s):hrs(h),min(m),sec(s){};

Time operator +(Time &t){
 Time t3;
 t3.sec= sec +t.sec;
 t3.min=min+t.min+t3.sec/60;
 t3.sec%=60;
 t3.hrs=hrs+t.hrs+t3.min/60;
 t3.min%=60;
 t3.hrs%=24;
return t3;
}

friend ostream& operator << (ostream & output ,Time &t ){
 output<<t.hrs<<" hrs "<<t.min<<" min "<<t.sec<<" sec "<<endl;
 return output;
}


};

int main(){

Time t1(2,45,50);
Time t2(1,30,40);
Time t3=t1+t2;
cout<<"T1 = "<<t1<<endl;
cout<<"T2 = "<<t2<<endl;
cout<<"T3 = "<<t3<<endl;

return 0;
}

