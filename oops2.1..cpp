#include <iostream>
using namespace std;

int main() 
{
  int n=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    int element=arr[1][0];
    int element2=arr[0][0];
    
    
    
    
    int left=0,right=n-1;
    int top=0,bottom=n-1;
    
    // while(arr[0][2]!=element){
      arr[1][0]=arr[2][0];
      for(int j=1;j<=2;j++){
        arr[2][j-1]=arr[2][j];
      }
      for(int i=2;i>=1;i--){
        arr[i][2]=arr[i-1][2];
      }
      for(int j=2;j>=1;j--){
        arr[0][j]=arr[0][j-1];
      }
      arr[0][0]=arr[1][0];
      arr[1][0]=arr[2][0];
      
      arr[2][0]=arr[2][1];
      arr[2][1]=arr[2][2];
      
      arr[2][2]=arr[1][2];
      arr[1][2]=arr[0][2];
      
      arr[0][2]=arr[0][1];
      arr[0][1]=element;
    // }
    cout<<endl;
    cout<<"Rotated matrix: "<<endl;
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}       
