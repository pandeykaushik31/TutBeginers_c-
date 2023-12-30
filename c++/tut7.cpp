#include<iostream>

using namespace std;
int c=45;

int main(){

// ****************Built-in data types****************
    // int a,b,c;
    // cout<<"enter the value of a : ";
    // cin>>a;
    // cout<<"enter the value of b : ";
    // cin>>b;
    // c=a+b;
    // cout<<"The sum of a + b = "<<c<<endl;
    // cout<<"The global value of c is : "<<::c<<endl;

// ****************Float,long doble and double literals****************
    // float d=34.4f;
    // long double e=34.4l;
    // cout<<" The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<" The size of 34.4F is "<<sizeof(34.4f)<<endl;
    // cout<<" The size of 34.4l is "<<sizeof(34.4f)<<endl;
    // cout<<" The size of 34.4L is "<<sizeof(34.4f)<<endl;
    // cout<<" The size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"the value of d is : "<<d<<endl<<"the value of e is : "<<e<<endl;

// ****************Reference Variable****************

    // int x=301;
    // int & y=x;
    // cout<<"the reference of x is y and the value of y = "<<y<<endl;

// ****************Type-casting****************

    float a=45.001;
    cout<<"the value of a = "<<a<<endl;
    cout<<"the value of a = "<<(int)a<<endl;
    
    int x=74;
    float y=56.8;
    cout<<"the value after x+(int)y = "<<x+(int)y<<endl;
    cout<<"the value after x+y = "<<x+int(y)<<endl;
    cout<<"the value after x+y = "<<x+y<<endl;

    return 0;

    
    
}