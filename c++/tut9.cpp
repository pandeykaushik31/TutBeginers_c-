#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age : ";
    cin>>age;

    // int v_id;
    // cout<<"\nEnter 1 if you have Voter's ID \nEnter 2 if dont have \nIf you are 18+ so enter 3 for apply for Voter's ID: ";
    // cin>>v_id;
    // if (v_id==1){
    // cout<<"you are eligible for voting"<<endl;
    // }
    // else if (v_id==2){
    // cout<<"you are not eligible for voting"<<endl;
    // }
    // else if (v_id==3){
    // cout<<" applied for Voter' ID"<<endl;
    // }
    // else{
    // cout<<"wrong input"<<endl;
    // }
    // return 0;

    //switch statement
    switch (age )
    {
    case 18:
        cout<<"apply next year";
        break;
    case 19:
        cout<<"you are  eligible to vote";
        break;
    case 17:
        cout<<"you are  not eligible to vote";
        break;
    default:
        cout<<"no cases found"<<endl;
        break;
    }
    
    
}