#include <iostream>
#include <string>
using namespace std;

string reverstring ( string &str){
    int left = 0;
    int right = str.length() -1;

    while (left < right){
        swap(str[left] , str[right]);
        left++;
        right--;
    }
    return str;
}

//using the new string to stote and iterate from the end 
string reverseStringUsingNewString( string &str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}


int main (){
    string str ="sushant";
    cout << "roginal string is " << str << endl;
    string reversedStr = reverstring(str);
    cout << "reversed string is " << reversedStr << endl;
    // string newReversedStr = reverseStringUsingNewString(str);
    // cout << "reversed string using new string is " << newReversedStr << endl;
    
    return 0;

}