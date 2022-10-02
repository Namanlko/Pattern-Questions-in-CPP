// Pattern 2. 0-1 Pattern

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if (i==j ||(i-j)%2 == 0){
                cout<<" "<<1<<" ";
            }
            else{
                cout<<" "<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}