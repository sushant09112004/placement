#include<iostream>
using namespace std;

class maths {
    public:
        int add (int a ,int b){
            return a + b ;
        }
        double add (double a ,double b){
            return a  + b;
        }
        int add (int a, int b ,int c){
            return a + b + c;
        }
};
 class advanced : public maths{
     public:
        int multiply (int a ,int b){
            return a * b ;
        }
};

int main (){
    maths obj ;
    cout << obj.add (2,3) << endl ;
    cout << obj.add(2,3,5) <<endl;
    cout << obj.add (2.5,3.5) << endl ;
    advanced obj2;
    cout<<"this is the example of inheritanec"<<endl;
    cout<<obj2.add(2,3)<<endl;
}