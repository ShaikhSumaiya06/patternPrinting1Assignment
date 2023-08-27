
/*
Print the following pattern
Sample Input : n= 4
Output :
   A 
  A B
 A B C
A B C D 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}