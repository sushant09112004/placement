#include <iostream>
#include <string> 
using namespace std;

class teacher {
    public:
     teacher (string n ,string s ,string d){
        name = n;
        subject = s;
        ept =d;

     };
    string name;
    string subject;
    string ept;
};
int main() {
    teacher t1("sushant","maths","science");
    cout << "Teacher name is " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.ept << endl;

    return 0;
}