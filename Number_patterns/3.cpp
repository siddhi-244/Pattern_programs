/*
      1 
    2 1 2  
  3 2 1 2 3 
4 3 2 1 2 3 4 
*/
#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int oval=1;
  int stars=1;
  for(int i=1;i<=n;i++){
    int spaces=n-i;
    for(int j=1;j<=spaces;j++){
      cout<<" ";
    }
    int ival=oval;
    for(int j=1;j<=stars;j++){
      cout<<ival;
      if(j<=stars/2){
        ival--;
      }
      else{
        ival++;
      }
      
    }
    oval++;
    spaces--;
    stars += 2;
    cout<<endl;
    
  }
}