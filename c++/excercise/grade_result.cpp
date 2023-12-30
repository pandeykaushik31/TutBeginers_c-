#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks = ";
    cin>>marks;
    if (marks>=90){
        cout<<"Grade A";
    }
    else if((marks<=90)&&(marks>=80)){
        cout<<"Grade B";
    }
    else if((marks<=80)&&(marks>=70)){
        cout<<"Grade C";
    }
    else if((marks<=70)&&(marks>=60)){
        cout<<"Grade D";
    }
    else if((marks<=60)&&(marks>=50)){
        cout<<"Grade E";
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}