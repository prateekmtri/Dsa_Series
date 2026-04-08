// *****
// ****
// ***
// **
// *







#include<iostream>
using namespace std;
int main(){
    int i , j , n;
    cout<<"Enter the value : ";
    cin>>n;
    for(i=0; i<=n; i++){
        for(j=n-i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}