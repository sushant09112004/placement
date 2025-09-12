#include<iostream>
using namespace std;

class student{
    public:
    int name ,std ;
    student(int a ,int b){
        name = a ;
        std = b;
        cout << "parameterized constructor called"<<endl;

    }
};

int main(){
    student s1(10,12);
    cout << s1.name <<endl;
    
}