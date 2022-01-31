/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;
    
    student(){
        cout<<"Default Constructor"<<endl;
    }
    
    student(string s, int a, int g){
         cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    
    student(student &a){
         cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender= a.gender;
    }
    
    ~student(){
        cout<<"Destructor called"<<endl;
    }
    void setName(string s){
        name = s;
    }
    
    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
        
    }
};

int main()
{   
    student a("Urvi",20,1);
  //  a.printInfo();
    student b;
    student c = a;   //or c(a)
    return 0;
}
