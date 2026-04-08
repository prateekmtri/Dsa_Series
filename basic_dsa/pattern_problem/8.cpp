// *********
//  *******
//   *****
//    ***
//     *









#include<iostream>
using namespace std;
int main(){
    int n , i , j,k;
    cout<<"Enter the value : ";
    cin>>n;
    for(i=n; i>=1; i--){

        for(k=1; k<=n-i; k++){
            cout<<" ";
        }

        for(j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}