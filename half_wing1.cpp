/*
Print the following pattern
Input: n = 4
Output:
*
**
***
****
***
**
*

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of lines : ";
    cin>>n;
    // printing upper triangle
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        // for(int k=1;k<=n-i;k++){
        //     cout<<"* ";
        // }
        cout<<endl;
    }
    // printing lower triangle
    for(int i=1;i<n;i++){         
        for(int k=1;k<=n-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}