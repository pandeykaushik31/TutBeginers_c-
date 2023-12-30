#include<iostream>
using namespace std;
int main(){
    int n,m=0,flag=0;
    cout<<"Enter the number : ";
    cin>>n;
    m=n/2;
    for(int i=2;i<=m;i++){
        if(n%i==0){
            cout<<"The number is not prime "<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"The Number is prime "<<endl;
    return 0;
}