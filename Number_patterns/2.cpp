/*
1234554321
1234**4321 
123****321 
12******21 
1********1 
*/ 
#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int spaces=0;
  int stars=n;
  for(int i=1;i<=n;i++){
    int ival=1;
    for(int j=1;j<=stars;j++){
      cout<<ival++;
    }
    for(int j=1;j<=spaces;j++){
      cout<<"*";
    }
    for(int j=1;j<=stars;j++){
      cout<<--ival;
      
    }
    stars -=1;
    spaces+=2;

    cout<<endl;
    
    
  }
}