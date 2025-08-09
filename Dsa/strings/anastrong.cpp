#include  <iostream>
#include <string>
#include <algorithm>
using namespace std ;

int main (){
    string s = "sushantjadhav";
    string t = "sushant";
    string temp = s + s;
    if (temp.find(t) != string::npos) {
        cout << "Yes, t is a substring of new" << endl;
    }
    else {
        cout << "No, t is not a substring of new" << endl;
    }
    return 0;
}