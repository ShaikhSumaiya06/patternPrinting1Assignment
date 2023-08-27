
/*
Print the following pattern
Sample Input : n= 4
Output :
      * 
    * *
  * * *
* * * *
  * * * 
    * * 
      * 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=i;k>0;k--){
            cout<<"* ";
           
        }
        cout<<endl;
    }
     for(int i=1;i<n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=n-i;k++){
            cout<<"* ";
           
        }
        cout<<endl;
    }
     
    
}