/*

		*	
	*		*	
*				*	
	*		*	
		*	
		
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    int spaces=n/2;
    int stars=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=spaces;j++){
            
            cout<<"\t";
            
           
        }
        for(int j=1;j<=stars;j++){
            if(j==1 || j==stars ){
            cout<<"*\t";
            }
             else{
                cout<<"\t";
            }
        }
        if(i<=n/2){
            spaces--;
            stars=stars+2;
        }
        else{
            spaces++;
            stars=stars-2;
        }
        cout<<endl;
    }
    
}