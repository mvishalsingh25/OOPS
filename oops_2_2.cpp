#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cout<<"enter size of string : ";
  cin>>n;
  int nums[n];
  cout<<"enter numbers: ";
  for(int i=0;i<n;i++){
   cin>>nums[i];
  }
   sort(nums,nums+n);
   
  do{
    for(int i=0;i<n;i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
  }
  while(next_permutation(nums,nums+n));
  return 0;
}
