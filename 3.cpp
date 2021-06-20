/*Pattern
*	
			*	*	
		*	*	*	
	*	*	*	*	
*	*	*	*	*	
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    int stars=1;
    int spaces=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=spaces;j++){
            cout<<"\t";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*\t";
        }
        spaces--;
        stars++;
        cout<<endl;
    }
    
}