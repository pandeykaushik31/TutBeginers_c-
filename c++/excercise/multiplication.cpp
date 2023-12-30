#include<iostream>
using namespace std;
int main(){
    int a,i=1;
    cout<<"Enter the number which you want to print the table : ";
    cin>>a;
   
    while (i<=10){
        
        cout<<a<<" "<<"X"<<" "<<i<<" "<<"="<<" "<<a*i<<endl;
        i++;
   }
   return 0;
   
    
}