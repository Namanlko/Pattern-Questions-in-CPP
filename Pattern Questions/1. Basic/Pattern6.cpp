// Pattern 6. Floyd's Triangle.

/*

1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i>=j){
                cout<<" "<<count<<" ";
                count++;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}