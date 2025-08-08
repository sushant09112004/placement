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
    double salary;

    void changeDept(string newDept) {
        dept = newDept;
    }
   
}; 

int main() {
    Teacher t1;
    t1.name = "John Doe";
    t1.subject = "Mathematics";
    t1.dept = "Science";
    t1.salary = 50000.0;

    cout << "Teacher name is " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Salary: ₹" << t1.salary << endl;

    // Test changeDept function
    t1.changeDept("Commerce");
    cout << "Department after change: " << t1.dept << endl;
    // t1.chnageSaley(600000.0);
    // cout<< "Salary of the function call is " <<t1.salary << endl;

    return 0;
}
