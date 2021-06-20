/* Pattern 1
*	
*	*	
*	*	*	
*	*	*	*	
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
   //write your code here
   for(int i=1;i<=n;i++){//row
       for(int j=1;j<=i;j++){//col
           cout<<"*\t";
       }
       cout<<endl;
   }
   
}