#include<iostream>
// #include"this.h"this will show error if this header file is not  present in current directory 

using namespace std;

int  main()
{
    int a=4,b=5;
    cout<<" "<<endl;
    cout<<"------the following are arithmetic operator------"<<endl;
    
    //arithmetic operator
    cout<<"the sum of values are : "<<a+b<<endl;
    cout<<"the diffrence of values are : "<<a-b<<endl;
    cout<<"the multiplication  of values are : "<<a*b<<endl;
    cout<<"the divide of values are : "<<a/b<<endl;
    cout<<"the modulus of values are : "<<a%b<<endl;
    cout<<"the increment of values are : "<<a++<<endl;
    cout<<"the decrement of values are : "<<a--<<endl;
    cout<<"the pre-increment of values are : "<<++a<<endl;
    cout<<"the pre-decrement of values are : "<<--a<<endl;
    cout<<" "<<endl;


    //assignment operation 
    // int a=1;
    // char d="hy";

    //comparison operator
    cout<<" "<<endl;
    cout<<"------the following are comparison operator------"<<endl;
    
    cout<<"the value of a==b : "<<(a==b)<<endl;
    cout<<"the value of a!=b : "<<(a!=b)<<endl;
    cout<<"the value of a>=b : "<<(a>=b)<<endl;
    cout<<"the value of a<=b : "<<(a<=b)<<endl;
    cout<<"the value of a<b : "<<(a<b)<<endl;
    cout<<"the value of a>b : "<<(a>b)<<endl;

     //logical operator
    cout<<" "<<endl;
    cout<<"------the following are logical operator------"<<endl;
    
    cout<<"the value of ((a==b) && (a<=b)) : "<<((a==b) && (a<=b))<<endl;
    cout<<"the value of ((a==b) || (a<=b)) : "<<((a==b) || (a<=b))<<endl;
    cout<<"the value of (!(a==b)) : "<<(!(a==b))<<endl;

    return 0;
}