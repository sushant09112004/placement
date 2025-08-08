//given an input string and a char`acter, this program counts the number of occurrences of that character in the string.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input = "Hello, World!";
    char character = 'o';
    int count = 0;
   
    cout << "Enter a character to count: ";
    cin >> character;
    for (char c : input) {
        if (c == character) {
            count++;
        }
    }
    cout << "The character '" << character << "' appears " << count << " times in the string." << endl;
    return 0;
}   