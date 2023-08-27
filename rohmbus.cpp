/*
Print the following pattern
Sample Input : n = 4
Output :
****
****
****
****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++) cout<<"  ";
        for(int k=1;k<=n;k++) cout<<"* ";
        cout<<endl;
    }
}