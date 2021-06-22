/*5
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int i,j;
  int val=1;
  int stars=1;
  for(int i=1;i<=n;i++){
    int spaces=n-i;
    for(int j=1;j<=spaces;j++){
      cout<<" ";
    }
    int  ival=val;
    for(int j=1;j<=stars;j++){
      cout<<ival;
      if(j<=stars/2)
       ival++;
      else
       ival--;
      
    }
    val++;
    spaces--;
    stars +=2;
    cout<<endl;
  }
  }