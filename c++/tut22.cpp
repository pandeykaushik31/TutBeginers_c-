#include <iostream>
using namespace std;

class binary
{
    string s;

    public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);

};

void binary :: read (void){
    cout<<"enter the binary number : "<<endl;
    cin>>s;
}

void binary ::  chk_bin(void){
    for (int  i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary "<<endl;
            exit(0);
        }
        
    }
}
void binary ::  ones(void){
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i)==0){
            s.at(i)= '1';
        }
        else{
            s.at(i)='0';

        }
    }
    
    
}
void binary ::display(void){
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i)<<endl;
    }
    

}


int main()
{
    // oops -classes and objects

    // c++ --intitially called-->c with classes by stroustroup
    // class-- extension of structures (in c)
    // structures had limitations
    // --> members are public
    // --> no methods
    // classes = structures + more
    // classes  can have method and properties
    // classes can make few member as private as few member  public
    // structured in c++ are typedefed
    // you can declare object along with class devclaration like this :
    /*class employee{
        // class definition
    }shivam, vivek;*/
    // shivam.salary = 8 makes no sense if salary is private

    // nesting of member function
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}