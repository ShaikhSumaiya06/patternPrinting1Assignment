/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4 
 1 2 3
  1 2
   1 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){ 
        for(int k=1;k<=i-1;k++){cout<<" ";}       
        for(int j=1;j<=(n+1)-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}