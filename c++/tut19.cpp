#include<iostream>
using namespace std;
int sum (int a,int b){
    cout<<"with using 2 arguments is : ";
    return a+b;

}
int sum (int a, int b, int c){
    cout<<"with using 3 arguments is : ";
    return a+b+c;

}

//calculate the volume of cylinder
float volcyl(float r, float h){
    return (3.14 * r * r * h);
}
//calculate the volume of cube 
float volcube(float a){
    return (a*a*a);
}
//calculate the volume of rectangle 
float volrect(float l,float b,float h){
    return (l*b*h);
}

int main(){
    int x,y,z;
    cout<<"Enter the value of x :"<<endl;
    cin>>x;
    cout<<"Enter the value of y :"<<endl;
    cin>>y;
    cout<<"Enter the value of z :"<<endl;
    cin>>z;
    cout<<"The sum of "<<x<<" and "<<y<<" "<<sum(x,y)<<endl;
    cout<<"The sum of "<<x<<", "<<y<<" and "<<z<<" "<<sum(x,y,z)<<endl;
    cout<<"The volume of cylinder whose radius is "<<x<<" and height is "<<z<<" : "<<volcyl(x,y)<<endl;
    cout<<"The volume of cube whose side is "<<x<<" : "<<volcube(x)<<endl;
    cout<<"The volume of rectangle whose length is "<<x<<" , breadth is "<<y<<" and height is "<<z<<" : "<<volrect(x,y,z)<<endl;
    
    return 0;
}