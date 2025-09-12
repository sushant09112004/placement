#include<iostream>
using namespace std;

class complex {
    
    public:
    int real ,img;
    complex(int r=0, int i =0){
        real = r;
        img = i ;
    }
    complex operator + (complex const &obj){
        complex res;
        res.real =real - obj.real;
        res.img = img - obj.img;
        return res;
    }
    void display(){
        cout<<real << " + i" << img << endl;
    }
};

int main (){
    complex c1(1,3) ,c2(2,4);
    complex c3 ;
    c3 =c1+c2;
    c3.display();
    cout<< c3.real;
    return 0;
}


