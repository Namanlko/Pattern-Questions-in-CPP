// Pattern 6. Star Pattern.

/*

         *
      *  *  *
   *  *  *  *  *
*  *  *  *  *  *  *
*  *  *  *  *  *  *
   *  *  *  *  *
      *  *  *
         *


*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        
        int space = n-i;
        
        for(int j=space; j>=1; j--){
            cout<<"   ";
        }

        for(int j=1; j<=i; j++){
            cout<<" * ";
        }

        for(int j=2; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        int space = n-i;
        
        for(int j=space; j>=1; j--){
            cout<<"   ";
        }

        for(int j=1; j<=i; j++){
            cout<<" * ";
        }

        for(int j=2; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}