/*Pattern
        *   
    *   *   *   
*   *   *   *   *   
    *   *   *   
        *   
    */



#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    int stars=1;
    int spaces=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=spaces;j++){
            cout<<"\t";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*\t";
        }
        if(i<=n/2){
            spaces--;
            stars +=2;
            
        }
        else {
            spaces++;
            stars=stars-2;
        }
        cout<<endl;
    }

    
}