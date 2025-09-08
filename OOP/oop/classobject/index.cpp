#include <iostream>
#include <string> 
using namespace std;

class Teacher {
    private:
    double salary;
public:
    string name;
    string subject;
    string dept;

    void changeDept(string newDept) {
        dept = newDept;
    }
   void changename (string newname){
    name =newname;
   }
}; 

int main() {
    Teacher t1;
    t1.name = "John Doe";
    t1.subject = "Mathematics";
    t1.dept = "Science";

    cout << "Teacher name is " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;

    // Test changeDept function
    t1.changeDept("Commerce");
    cout << "Department after change: " << t1.dept << endl;
    // t1.chnageSaley(600000.0);
    // cout<< "Salary of the function call is " <<t1.salary << endl;
    t1.changename("sushantnewwww");
    cout<<"old name " << t1.name << endl;
    cout << "new name is "<< t1.name << endl ;
    return 0;
}
