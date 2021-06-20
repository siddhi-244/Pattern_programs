/*
*   *   *       *   *   *   
*   *               *   *   
*                       *   
*   *               *   *   
*   *   *       *   *   *   
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    int stars=n/2+1;
    int spaces=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=stars;j++){
            cout<<"*\t";
            
        }
        for(int j=1;j<=spaces;j++){
            cout<<"\t";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*\t";
            
        }
        if(i<=n/2){
            spaces +=2;
            stars--;
        }
        else{
            stars++;
            spaces -=2;
        }
        cout<<endl;
    }
    