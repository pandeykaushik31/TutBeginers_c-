#include<iostream>
#include<cmath>
using namespace std;
 inline int product(int a, int b){
//  int product(int a, int b){
    // static int c=0; //this executes only once 
    // c=c+1; // next time this function is run, the value of c will be retained 
    return a*b;
}
float moneyreceived(int currentmoney ,float factor=1.08){
    return currentmoney * factor;

}
int main(){
    int a,b;
    // cout<<"Enter the value of a and b  : ";
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will received "<<moneyreceived(money)<<"Rs after 1 year "<<endl; 
    cout<<"for VIP : If you have "<<money<<" Rs in your bank account, you will received "<<moneyreceived(money, 1.1)<<"Rs after 1 year "<<endl; 
    return 0;
    
}