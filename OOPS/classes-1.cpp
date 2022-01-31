#include <iostream>

using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
    
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
        cout<<"Name: ";
        cin>>arr[i].name;
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
