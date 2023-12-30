#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
}
// this will not swap a and b
void swap(int a ,int b){
    int temp=a;
    a=b;
    b=temp;

}
// call by reference using pointers 
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b=temp;
   
}

// call by reference using c++ reference variables 
void swapReferenceVar(int &a, int &b){
    int temp = *a;
    *a = *b;
    *b=temp;
    return 0;
}

int main (){
    int x=4, y=5;
    // cout<<"The value of sum is : "<<sum(x,y)<<endl;
    cout<<"The value of x is : "<<x<<"the value of y is : "<<y <<endl;
    // swap x and y <--this will not swap x and y
    // swapPointer(&x,&y);//this will swap a and b using pointer reference 
    swapReferenceVar(&x,&y) = 766;//this will swap a and b using pointer reference 
    
    cout<<"The value of x is : "<<x<<"the value of y is : "<<y <<endl;
    // swap x and y <--this will not swap x and y


    
    return 0;

}