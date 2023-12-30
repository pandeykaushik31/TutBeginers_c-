#include<iostream>
using namespace std;
// function prototype 
// type function_name (arguments)
int sum (int , int );
// int sum (int a, int b);<--either we define with variable or only with data type both gives correct output 
// int sum(int a, b ); <--not acceptable |we have to define the type for both 


int main (){
    int num1, num2;
    // num1 and num2 are actual parameter 
    cout<<"Enter the First Number : "<<endl;
    cin>>num1;
    cout<<"Enter the Second Number : "<<endl;
    cin>>num2;
    cout<<"The sum of Numbers are : "<<sum(num1,num2)<<endl;
    return 0;

}
int sum(int a, int b){
    // a and b are forml parameter and they taking values from actual parameter num1 and num2
    int c= a+b;
    return c;





}