// Pattern 3. Rhombus Pattern.

/*

    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        int space = n-i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=n; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    return 0;
}