// Pattern 4. Number Pattern.

/*

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/ 

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        int space = n-i;
        for(int i=space; i>0; i--){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<"   ";
        }
        cout<<endl;
    }
    return 0;
}