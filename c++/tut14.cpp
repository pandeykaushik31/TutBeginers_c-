#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char div;
    float salary;
    bool PAN_id;
}ep;

union Id
{
    int eid;
    char group ;
    float salary ;
    bool PAN_id ;
};

int main(){
    // union Id m1;
    // m1.eid = 21;
    // cout<<m1.eid<<endl;
    // m1.group = 'D';
    // cout<<m1.group<<endl;
    // m1.salary =98989;
    // cout<<m1.salary<<endl;
    // m1.PAN_id = true;
    // cout<<m1.PAN_id<<endl;

    enum meal{breakfast, lunch, snacks, dinner};
    meal m1=dinner;
    cout<<(m1==3)<<endl;




    // ep Kaushik;
    /*Kaushik.eid;
    cout<<"enter the eid : ";
    cin>>Kaushik.eid;
    Kaushik.div;
    cout<<"enter the div : ";
    cin>>Kaushik.div;
    Kaushik.salary;
    cout<<"enter the salary : ";
    cin>>Kaushik.salary;
    Kaushik.PAN_id;
    cout<<"enter the PAN_Id : ";
    cin>>Kaushik.PAN_id;*/

    // cout<<" The Emp_Id is : "<<Kaushik.eid<<endl;
    // cout<<" The Emp_Id is : "<<Kaushik.div<<endl;
    // cout<<" The Emp_Id is : "<<Kaushik.salary<<endl;
    // cout<<" The Emp_Id is : "<<Kaushik.PAN_id<<endl;
    
    return 0;
}