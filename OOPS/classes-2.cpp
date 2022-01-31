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
    
    void setName(string s){
        name = s;
    }
    
    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name - ";
        cout<<name<<endl;
        cout<<"Age - ";
        cout<<age<<endl;
        cout<<"Gender - ";
        cout<<gender<<endl;
        
    }
};

int main()
{   
    cout<<"Enter the no. of records you want to enter: ";
    int n;
    cin>>n;
    student arr[n];
    for(int i =0;i<n;i++){
        string s;
        cout<<"Name: ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"gender: ";
        cin>>arr[i].gender;
    }
  
  for(int i=0;i<n;i++){
      arr[i].printInfo();
  }
    return 0;
}
