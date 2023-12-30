#include<iostream>
using namespace std;
int main(){
    // what is pointer--------a data type which hold the address of other data types
    int a=3;
    int* b=&a;
    // &-----is address operator
    // *-----is dereferencing 
    cout<<"the address of a "<<b<<endl;
    cout<<"the address of a "<<&a<<endl;

    int** c=&b;
    cout<<"the address of b "<<&b<<endl;
    cout<<"the address of b "<<c<<endl;
    cout<<"the address of c "<<*c<<endl;
    cout<<"the address of c "<<**c<<endl;
    return 0 ; 
}